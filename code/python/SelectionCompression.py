import zlib

def selective_compress(data, compressible_parts):
    compressed_data = b""
    offset = 0
    for start, end in compressible_parts:
        # Add uncompressed part
        compressed_data += data[offset:start]
        # Add compressed part
        compressed_part = zlib.compress(data[start:end])
        compressed_data += compressed_part
        offset = end
    # Add remaining uncompressed part
    compressed_data += data[offset:]
    return compressed_data

def selective_decompress(data, compressible_parts):
    decompressed_data = b""
    offset = 0
    for start, end in compressible_parts:
        # Add uncompressed part
        decompressed_data += data[offset:start]
        # Add decompressed part
        compressed_part = data[start:end]
        decompressed_part = zlib.decompress(compressed_part)
        decompressed_data += decompressed_part
        offset = end
    # Add remaining uncompressed part
    decompressed_data += data[offset:]
    return decompressed_data

# Example usage
data = b"Hello, this is a test. Compress this part: 12345678901234567890."
compressible_parts = [(31, 51)]

compressed = selective_compress(data, compressible_parts)
decompressed = selective_decompress(compressed, compressible_parts)

print("Original:", data)
print("Compressed:", compressed)
print("Decompressed:", decompressed)

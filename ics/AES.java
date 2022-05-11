/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ics;

/**
 *
 * 
 */
import java.util.Arrays;
import javax.crypto.Cipher;
import javax.crypto.spec.SecretKeySpec;
public class AES {
public static void main (String[] args) throws Exception {
String text = "This is a simple text Message.";
System.out.println("UnEncryptedage: "+ text + "\n");
System.out.println("UnEncryptedage as Array: "+ 
Arrays.toString(text.getBytes()) + "\n");
//Encrypted data is binary data
String encryptTextA = Arrays.toString(encryptAES(text));
System.out.println("Encryptedage as Array: "+ encryptTextA + "\n");
String encryptText = new String(encryptAES(text), "UTF-8");
System.out.println("Encryptedage as String: "+ encryptText + "\n");
String decryptTextA = Arrays.toString(decryptAES(encryptAES(text)));
System.out.println("Decryptedage as Array: "+ decryptTextA + "\n");
String decryptText = new String(decryptAES(encryptAES(text)), "UTF-8");
System.out.println("Decryptedage: "+ decryptText);
}
// public static byte[] decryptAES(String message) throws Exception {
public static byte[] decryptAES(byte[] message) throws Exception {
    // 16 byte secretKey
    String secretKey = "TestSecretKey111";
    SecretKeySpec key = new SecretKeySpec(secretKey.getBytes(), "AES");
    Cipher cipher = Cipher.getInstance("AES");
    cipher.init(Cipher.DECRYPT_MODE, key);
    // return cipher.doFinal(message.getBytes());
    return cipher.doFinal(message);
}
public static byte[] encryptAES(String message) throws Exception {
    // 16 byte secretKey
    String secretKey = "TestSecretKey111";
    SecretKeySpec key = new SecretKeySpec(secretKey.getBytes(), "AES");
    Cipher cipher = Cipher.getInstance("AES");
    cipher.init(Cipher.ENCRYPT_MODE, key);
    return cipher.doFinal(message.getBytes());
}
}
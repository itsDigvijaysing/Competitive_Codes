class Solution:
    def removeSubfolders(self, folder: list[str]) -> list[str]:
        output =[]
        folder.sort()
        # print(folder)
        if folder is None or len(folder) == 0: return output
        for i in folder:
            if len(output) == 0:
                # print("i",i)
                output.append(i)
            else:
                text = i.split("/")
                # print("Output list:", output)
                # print("Last element:", output[-1])
                currtext = output[-1].split("/")
                # print(text)
                # print(currtext)
                newChecker=False
                if len(currtext)>len(text): 
                    output.append(i)
                    continue
                for j in range(len(currtext)):
                    if text[j]==currtext[j]: continue
                    else: newChecker = True
                if newChecker:
                    # print("i",i)
                    output.append(i)
        return output


        
        
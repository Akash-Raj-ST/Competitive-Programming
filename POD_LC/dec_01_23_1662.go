func arrayStringsAreEqual(word1 []string, word2 []string) bool {
    word_1 := "";
    word_2 := "";

    for _,i := range word1{
        word_1 += i;
    }

    for _,i := range word2{
        word_2 += i;
    }     

    if word_1==word_2{
        return true;
    }
    
    return false;
}
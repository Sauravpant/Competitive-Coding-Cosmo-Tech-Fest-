// Problem Statement : Given a string s reverse the order of words in s.

const reverseWords= (s) => {
  const words = s.trim().split(/\s+/); 
  const reversedWords=words.reverse();
  return reversedWords.join(' ');
}
let s="The quick brown fox jumps over the laxy dog";
console.log(reverseWords(s));

Write a sort() function that takes a two dimensional array of strings and sorts the words within each of the rows of words (sentences) passed to it in ascending order (smallest to largest - alphabetically). 

Also, write a binary search function that takes the same two dimensional array of strings, a word to search for and two integers for the row and column number where the search word may be found, and searches for the word in all rows of the array. if the word is found within any of the rows, the function must return true and assign the row and column number within the array, where the word was found, to the two integer parameters passed. If the word is not found, the function must return false and leave the row and column parameters unassigned.

In main, initialize a 6 x 10 two dimensional array of strings to the following words (see "Introduction to Arrays" for an example of initializing an array of strings).

"the", "a", "this", "that", "some" for the first row (the rest should be initialized to null strings)

"crazy", "lazy", "fast", "slow", "big", "skinny", "tall", "poor", "drunk", "pretty"

"man", "woman", "boy", "girl", "cat", "dog", "bird", "teacher", "mailman", "driver"

"drove", "took", "carried", "hit", "pushed", "fell", "ran", "brought", "pulled", "climbed"

"over", "under", "by", "between", "next to", "near", "across", "to", "from", "into"

"refrigerator", "stove", "car", "house", "school", "pool", "roof", "floor", "table", "wall"

Then, declare a 5 x 7 two dimensional array of strings and make 5 random sentences, each made up of 7 words, by randomly picking a word from the first array, followed by a space, followed by a random word from the second array, followed by a space, followed by a word from the third array, followed by a space, followed by a word from the fourth array, followed by a space, followed by a word from the fifth array, followed by a space, followed by a word  again from the first array, followed by a space and a random word from the sixth array (for a total of 7 words), such as "some drunk boy drove into a refrigerator" and store these 5 randomly picked sentences of 7 words each in the 5 x 7 array mentioned above - one sentence in each of the 5 rows of the two dimensional array - the first sentence in the first row, the second sentence in the second row, and so on. Each sentence is made by randomly picking words from the 6 arrays, in the order specified: 1, 2, 3, 4, 5, 1, 6 (5 sentences each having 7 words). Since half of the first array are NULL strings, some sentences will begin with an empty string. So, the example given above may be: "drunk boy drove into a refrigerator", instead. Print the 5 sentences generated.

Pass the 5 x 7 array of sentences thus produced and the number of its rows (5) to the sort() function to sort the words within each row. After sorting the example sentence shown above, for example, it will become: "a boy drove drunk into refrigerator some". The function must sort all 5 sentences. Print the sorted sentences in main - not in sort() function.

Then, have the user enter a word to search for and pass the same 5 x 7 array of generated sentences, the size (5) and the word to search for to the binary search function and have main print both the array (row) number and the index within the row where the word was found or print that it was not found. Keep asking the user to enter a word to search for until the user enters a NULL (empty) string: "".

The following shows a sample run of the program:

some drunk boy drove into a refrigerator

the slow cat ran into the stove

a lazy teacher carried into the house

poor mailman climbed to the roof   [this has picked up a NULL string from the first array]

fast woman hit over the floor   [this has picked up a NULL string from the first array]

Sorted words:

a boy drove drunk into refrigerator some

cat into ran slow stove the the

a carried house into lazy teacher the

climbed mailman poor roof the to

fast floor hit over the woman

Enter word to search for:  teacher

teacher was found in row 2 and column 5.  [remember indices begin from 0]. 

Enter word to search for:  college

college was not found.

Enter a word to search for:  [ENTER]

Press any key to continue.

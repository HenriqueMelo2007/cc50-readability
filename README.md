According to Scholastic, “Charlotte's Web” by E. B. White is between a second- and fourth-grade reading level, and “The Giver” by Lois Lowry is between an eighth-grade reading level and a twelfth-grade reading level. series. However, what does it mean for a book to be at a “fourth grade reading level”?

Well, in many cases, a human expert can read a book and make a decision about which series they think the book is most appropriate for. But you can also imagine an algorithm trying to figure out what the reading level of a text is.

So what kinds of traits are characteristic of higher reading levels? Well, longer words probably correlate with higher reading levels. Likewise, longer sentences likely correlate with higher reading levels as well. Various “readability tests” have been developed over the years to provide a formulaic process for calculating the reading level of a text.

One such readability test is the Coleman-Liau index. The Coleman-Liau index of a text is designed to show what grade level (US) is needed to understand the text. The formula is:

`index = 0.0588 * L - 0.296 * S - 15.8`
Here, L is the average number of letters per 100 words in the text and S is the average number of sentences per 100 words in the text.

Let's write a program called readability that takes a text and determines its reading level. For example, if the user types a line from Dr. Seuss:

`$./readability`
`Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!`
`Grid 3`

The text the user entered has 65 letters, 4 sentences and 14 words. 65 letters per 14 words is an average of about 464.29 letters per 100 words. And 4 sentences per 14 words is an average of about 28.57 sentences per 100 words. Plugged into the Coleman-Liau formula and rounded to the nearest whole number, we get an answer of 3: therefore, this passage is at a third-grade reading level.
const result = document.getElementById("result");

async function searchWord() {

    const word = document.getElementById("word").value.trim();

    if (word === "") {
        alert("Please enter a word");
        return;
    }

    result.innerHTML = "Loading...";

    try {

        const response = await fetch(
            `https://api.dictionaryapi.dev/api/v2/entries/en/${word}`
        );

        if (!response.ok) {
            throw new Error("Word not found");
        }

        const data = await response.json();

        const item = data[0];

        const meaning = item.meanings[0];

        result.innerHTML = `
            <h2 class="word">${item.word}</h2>

            <p class="phonetic">
                ${item.phonetic || ""}
            </p>

            <div class="meaning">
                <p class="part">
                    ${meaning.partOfSpeech}
                </p>

                <p>
                    ${meaning.definitions[0].definition}
                </p>

                <p class="example">
                    ${meaning.definitions[0].example
                ? "Example: " + meaning.definitions[0].example
                : ""
            }
                </p>

                <div class="synonyms">
                    <strong>Synonyms:</strong>
                    ${meaning.synonyms.length
                ? meaning.synonyms.join(", ")
                : "No synonyms available"
            }
                </div>
            </div>
        `;

    }
    catch (error) {

        result.innerHTML = `
            <div class="error">
                Word not found!
            </div>
        `;
    }

}

document.getElementById("word").addEventListener("keypress", function (e) {

    if (e.key === "Enter") {
        searchWord();
    }

});
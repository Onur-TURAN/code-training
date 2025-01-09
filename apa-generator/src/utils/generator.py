def generate_apa_book_reference(author, year, title, publisher):
    """
    Generate an APA reference for a book.
    
    Parameters:
    author (str): Author of the book
    year (str): Year of publication
    title (str): Title of the book
    publisher (str): Publisher of the book
    
    Returns:
    str: APA formatted reference
    """
    return f"{author} ({year}). *{title}*. {publisher}."

def generate_apa_article_reference(author, year, title, journal, volume, issue, pages, doi):
    """
    Generate an APA reference for a journal article.
    
    Parameters:
    author (str): Author of the article
    year (str): Year of publication
    title (str): Title of the article
    journal (str): Journal name
    volume (str): Volume number
    issue (str): Issue number
    pages (str): Page range
    doi (str): DOI of the article
    
    Returns:
    str: APA formatted reference
    """
    return f"{author} ({year}). {title}. *{journal}*, {volume}({issue}), {pages}. https://doi.org/{doi}"

def main():
    print("APA Reference Generator")
    print("1. Book")
    print("2. Journal Article")
    choice = input("Choose the type of reference (1 or 2): ")
    
    if choice == '1':
        author = input("Enter the author(s): ")
        year = input("Enter the year of publication: ")
        title = input("Enter the title of the book: ")
        publisher = input("Enter the publisher: ")
        reference = generate_apa_book_reference(author, year, title, publisher)
    elif choice == '2':
        author = input("Enter the author(s): ")
        year = input("Enter the year of publication: ")
        title = input("Enter the title of the article: ")
        journal = input("Enter the journal name: ")
        volume = input("Enter the volume number: ")
        issue = input("Enter the issue number: ")
        pages = input("Enter the page range: ")
        doi = input("Enter the DOI: ")
        reference = generate_apa_article_reference(author, year, title, journal, volume, issue, pages, doi)
    else:
        print("Invalid choice")
        return
    
    print("\nAPA Reference:")
    print(reference)

if __name__ == "__main__":
    main()
/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (WideStringCat)
+ (id)stringWithWideCString:(int *)wideCString;	// 0x34e42e71
- (id)initWithWideCString:(int *)wideCString;	// 0x34e42ef1
- (int *)cWideString;	// 0x34e42d55
@end

@interface NSString (OCBStringAdditions)
+ (id)stringWithCsString:(const CsString *)csString;	// 0x34c38479
+ (id)stringWithOcText:(const OcText *)ocText;	// 0x34c59c41
- (id)initWithCsString:(const CsString *)csString;	// 0x34c01ddd
- (id)initWithOcText:(const OcText *)ocText;	// 0x34c59c7d
- (void)copyToCsString:(CsString *)csString;	// 0x34e43539
- (void)copyToOcText:(OcText *)ocText;	// 0x34cf1eb9
- (void)copyToOcText:(OcText *)ocText encoding:(int)encoding;	// 0x34cf1ecd
- (id)dataUsingWordEncoding:(int)encoding;	// 0x34cf1fa1
- (int)languageTypeAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x34e4348d
@end

@interface NSString (OCStringAdditions)
+ (id)mapString:(id)string;	// 0x34e47279
+ (bool)skipString:(id)string;	// 0x34e47395
@end

@interface NSString (CPStringAdditions_XmlString)
+ (id)stringWithXmlString:(const char *)xmlString;	// 0x34d059f1
- (id)initFromXmlNode:(xmlNode *)xmlNode ns:(const char *)ns attributeName:(const char *)name;	// 0x34d2a505
- (id)initWithContentOfXmlNode:(xmlNode *)xmlNode;	// 0x34d03989
- (id)initWithValueOfXmlAttribute:(xmlAttr *)xmlAttribute;	// 0x34d03529
- (id)initWithXmlString:(const char *)xmlString;	// 0x34c4f245
- (id)componentsSeparatedByWhitespace;	// 0x34d38435
- (const char *)xmlString;	// 0x34d118f9
@end

@interface NSString (CPStringAdditions)
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length codePointMapper:(/*function-pointer*/ void *)mapper;	// 0x34e4c661
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length fontFamilyName:(id)name;	// 0x34e4c535
- (BOOL)startsWithString:(id)string;	// 0x34d09e01
- (id)stringByFixingSymbolCharacters;	// 0x34e4c359
@end

@interface NSString (NSStringAppKitStubAdditions)
- (NSRange)oi_rangeOfCharactersFromSet:(id)set index:(int)index;	// 0x34ccf3bd
- (double)oi_realSizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x34c69bdd
- (double)oi_sizeWithFontName:(id)fontName size:(int)size;	// 0x34c099d9
- (double)oi_sizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x34c09a01
@end

@interface NSString (SFAAdditions)
+ (id)stringWithXmlChars:(const char *)xmlChars;	// 0x34d175ed
- (id)initFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute ns:(const xmlNs *)ns;	// 0x34e4f525
- (id)initWithXmlChars:(const char *)xmlChars;	// 0x34d17629
@end

@interface NSString (TSUFormatStringUtilities)
+ (id)numberSymbols;	// 0x34e5428d
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x34e54915
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x34e543c1
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x34e54de5
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x34e54cb9
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x34e54bf1
- (BOOL)isNumberFormatPattern;	// 0x34e548a9
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x34e533c1
- (id)numberPortionOfNumberFormatSubpattern;	// 0x34e53401
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x34e53389
- (id)prefixOfNumberFormatSubpattern;	// 0x34e53479
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x34e54a5d
- (id)suffixOfNumberFormatSubpattern;	// 0x34e53449
@end

@interface NSString (NSURLAdditionsAdditions)
- (BOOL)containsPercentEscapes;	// 0x34e58691
- (id)stringByPercentEscaping;	// 0x34e58a1d
@end

@interface NSString (SFUJsonAdditions)
- (void)appendJsonStringToString:(id)string;	// 0x34e5e6a5
@end

@interface NSString (SFUFormatStringUtilities)
+ (id)numberSymbols;	// 0x34e66b9d
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x34e67841
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x34e674fd
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x34e67d0d
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x34e67be1
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x34e67b19
- (BOOL)isNumberFormatPattern;	// 0x34e677d5
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x34e66ab5
- (id)numberPortionOfNumberFormatSubpattern;	// 0x34e66af5
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x34e66a7d
- (id)prefixOfNumberFormatSubpattern;	// 0x34e66b6d
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x34e67995
- (id)suffixOfNumberFormatSubpattern;	// 0x34e66b3d
@end

@interface NSString (CSVStringExtensions)
- (id)_createCsvRows:(unsigned *)rows usingDelimiter:(id)delimiter columnCountIsConstant:(BOOL *)constant;	// 0x34e77211
- (id)createCsvRows:(unsigned *)rows;	// 0x34e77625
@end

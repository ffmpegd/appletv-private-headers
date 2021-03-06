/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"


@interface NSString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
}
+ (id)_web_stringRepresentationForBytes:(long long)bytes;	// 0x355bff21
+ (id)allocWithZone:(NSZone *)zone;	// 0x354fcf29
+ (const unsigned *)availableStringEncodings;	// 0x355ab611
+ (unsigned)defaultCStringEncoding;	// 0x355ab225
+ (void)initialize;	// 0x35516341
+ (id)localizedNameOfStringEncoding:(unsigned)stringEncoding;	// 0x355ab691
+ (id)localizedStringWithFormat:(id)format;	// 0x355a8691
+ (id)pathWithComponents:(id)components;	// 0x3552dd9d
+ (id)string;	// 0x35505fa5
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x355a85f5
+ (id)stringWithCString:(const char *)cstring;	// 0x355a8525
+ (id)stringWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x35510d19
+ (id)stringWithCString:(const char *)cstring length:(unsigned)length;	// 0x355a85ad
+ (id)stringWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x35503679
+ (id)stringWithContentsOfFile:(id)file;	// 0x355a8779
+ (id)stringWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id *)error;	// 0x35546d91
+ (id)stringWithContentsOfFile:(id)file usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x355a8895
+ (id)stringWithContentsOfURL:(id)url;	// 0x355a87b9
+ (id)stringWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id *)error;	// 0x355a87f9
+ (id)stringWithContentsOfURL:(id)url usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x355a8845
+ (id)stringWithFormat:(id)format;	// 0x354fced1
+ (id)stringWithFormat:(id)format locale:(id)locale;	// 0x355a8709
+ (id)stringWithString:(id)string;	// 0x35533dd1
+ (id)stringWithUTF8String:(const char *)utf8String;	// 0x35500731
+ (BOOL)supportsSecureCoding;	// 0x35545421
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x355aa855
- (id)initWithCString:(const char *)cstring;	// 0x355a9e11
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x355a9ea5
- (id)initWithCString:(const char *)cstring length:(unsigned)length;	// 0x355a9dc5
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x355aa845
- (id)initWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x355a9f21
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x355aa835
- (id)initWithCoder:(id)coder;	// 0x3551d209
- (id)initWithContentsOfFile:(id)file;	// 0x355aa211
- (id)initWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id *)error;	// 0x35546de1
- (id)initWithContentsOfFile:(id)file usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x355aa6b9
- (id)initWithContentsOfURL:(id)url;	// 0x355aa279
- (id)initWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id *)error;	// 0x355aa2e1
- (id)initWithContentsOfURL:(id)url usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x355aa4c5
- (id)initWithData:(id)data encoding:(unsigned)encoding;	// 0x355aa039
- (id)initWithData:(id)data usedEncoding:(unsigned *)encoding;	// 0x355aa7d9
- (id)initWithFormat:(id)format;	// 0x355035e5
- (id)initWithFormat:(id)format arguments:(void *)arguments;	// 0x355075ad
- (id)initWithFormat:(id)format locale:(id)locale;	// 0x35534745
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x355aa865
- (id)initWithString:(id)string;	// 0x355a9f91
- (id)initWithUTF8String:(const char *)utf8String;	// 0x3552455d
- (const char *)UTF8String;	// 0x354ff2c5
- (id)__escapeString5991;	// 0x35556cc1
- (BOOL)_allowsDirectEncoding;	// 0x35543285
- (unsigned long)_cfTypeID;	// 0x35527a49
- (id)_copyFormatStringWithConfiguration:(id)configuration;	// 0x355ab101
- (id)_createSubstringWithRange:(NSRange)range;	// 0x3555d889
- (unsigned char)_encodingCantBeStoredInEightBitCFString;	// 0x35514bfd
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x35500685
- (const unsigned short *)_fastCharacterContents;	// 0x35500669
- (unsigned long)_fastestEncodingInCFStringEncoding;	// 0x355035a9
- (void)_flushRegularExpressionCaches;	// 0x354fe379
- (void)_getBlockStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range stopAtLineSeparators:(BOOL)lineSeparators;	// 0x35526e91
- (BOOL)_getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned long)encoding;	// 0x3550ac21
- (id)_initWithBytesOfUnknownEncoding:(char *)unknownEncoding length:(unsigned)length copy:(BOOL)copy usedEncoding:(unsigned *)encoding;	// 0x355aa091
- (id)_initWithDataOfUnknownEncoding:(id)unknownEncoding;	// 0x355aa159
- (BOOL)_isCString;	// 0x355a88e1
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x35519aad
- (NSRange)_rangeOfRegularExpressionPattern:(id)regularExpressionPattern options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x35600afd
- (unsigned long)_smallestEncodingInCFStringEncoding;	// 0x3555d9b5
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)regularExpressionPattern withTemplate:(id)aTemplate options:(unsigned)options range:(NSRange)range;	// 0x35600c65
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;	// 0x35516871
- (id)_stringByStandardizingPathUsingCache:(BOOL)cache;	// 0x3550679d
- (id)_stringRepresentation;	// 0x355a8901
- (id)_web_HTTPStyleLanguageCode;	// 0x355bddad
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;	// 0x355bde85
- (id)_web_URLFragment;	// 0x355bfec5
- (id)_web_characterSetFromContentTypeHeader_nowarn;	// 0x355c0cb1
- (int)_web_countOfString:(id)string;	// 0x355bf58d
- (id)_web_domainFromHost;	// 0x355bf86d
- (BOOL)_web_domainMatches:(id)matches;	// 0x355bf779
- (unsigned long)_web_extractFourCharCode;	// 0x355c0461
- (id)_web_fileNameFromContentDispositionHeader_nowarn;	// 0x355c0d6d
- (id)_web_filenameByFixingIllegalCharacters;	// 0x355c0315
- (id)_web_fixedCarbonPOSIXPath;	// 0x355bfb01
- (BOOL)_web_hasCaseInsensitivePrefix:(id)prefix;	// 0x3554a535
- (BOOL)_web_hasCountryCodeTLD;	// 0x355bf705
- (BOOL)_web_isCaseInsensitiveEqualToString:(id)string;	// 0x35512429
- (BOOL)_web_isFileURL;	// 0x355bfea5
- (BOOL)_web_isJavaScriptURL;	// 0x355c1025
- (BOOL)_web_looksLikeAbsoluteURL;	// 0x355bfe5d
- (BOOL)_web_looksLikeIPAddress;	// 0x355bf601
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;	// 0x355c09d5
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)nowarn;	// 0x355c06f9
- (id)_web_parseAsKeyValuePair_nowarn;	// 0x355c06e5
- (NSRange)_web_rangeOfURLHost;	// 0x355bfd6d
- (NSRange)_web_rangeOfURLResourceSpecifier_nowarn;	// 0x355c0975
- (NSRange)_web_rangeOfURLScheme_nowarn;	// 0x355c0891
- (NSRange)_web_rangeOfURLUserPasswordHostPort;	// 0x355bfca5
- (id)_web_splitAtNonDateCommas_nowarn;	// 0x355c04dd
- (id)_web_stringByCollapsingNonPrintingCharacters;	// 0x355c0141
- (id)_web_stringByExpandingTildeInPath;	// 0x355bfa85
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;	// 0x355c0ea1
- (id)_web_stringByTrimmingWhitespace;	// 0x355bf9d9
- (BOOL)boolValue;	// 0x35540975
- (const char *)cString;	// 0x355ab41d
- (unsigned)cStringLength;	// 0x35503261
- (const char *)cStringUsingEncoding:(unsigned)encoding;	// 0x35511731
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x3550cc31
- (id)capitalizedString;	// 0x355a8f59
- (id)capitalizedStringWithLocale:(id)locale;	// 0x355a8f6d
- (int)caseInsensitiveCompare:(id)compare;	// 0x35508b59
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x355a8505
- (Class)classForCoder;	// 0x355aa875
- (id)commonPrefixWithString:(id)string options:(unsigned)options;	// 0x355a8bc9
- (int)compare:(id)compare;	// 0x355471d9
- (int)compare:(id)compare options:(unsigned)options;	// 0x35512451
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x35501bd5
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x35501c01
- (unsigned)completePathIntoString:(id *)string caseSensitive:(BOOL)sensitive matchesIntoArray:(id *)array filterTypes:(id)types;	// 0x3559b9ed
- (id)componentsSeparatedByCharactersInSet:(id)set;	// 0x3554ae6d
- (id)componentsSeparatedByString:(id)string;	// 0x35502b09
- (id)copyWithZone:(NSZone *)zone;	// 0x355a8a39
- (id)dataUsingEncoding:(unsigned)encoding;	// 0x35504ab9
- (id)dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;	// 0x35504acd
- (XXStruct_9isexA)decimalValue;	// 0x355bbbed
- (id)decomposedStringWithCanonicalMapping;	// 0x355a8fb1
- (id)decomposedStringWithCompatibilityMapping;	// 0x355a8ff1
- (id)description;	// 0x354fd435
- (id)displayableString;	// 0x355a954d
- (double)doubleValue;	// 0x3550c729
- (void)encodeWithCoder:(id)coder;	// 0x355495d5
- (void)enumerateLinesUsingBlock:(id)block;	// 0x355a94bd
- (void)enumerateLinguisticTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options orthography:(id)orthography usingBlock:(id)block;	// 0x3562d241
- (void)enumerateSubstringsInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x35550b71
- (unsigned)fastestEncoding;	// 0x355035c5
- (const char *)fileSystemRepresentation;	// 0x3550a11d
- (float)floatValue;	// 0x35534db9
- (id)formatConfiguration;	// 0x355ab17d
- (BOOL)getBytes:(char *)bytes maxLength:(unsigned)length filledLength:(unsigned *)length3 encoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x3550ac91
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x354ff119
- (void)getCString:(char *)string;	// 0x355ab3d5
- (void)getCString:(char *)string maxLength:(unsigned)length;	// 0x355ab395
- (BOOL)getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned)encoding;	// 0x3553a891
- (void)getCString:(char *)string maxLength:(unsigned)length range:(NSRange)range remainingRange:(NSRange *)range4;	// 0x355ab249
- (void)getCharacters:(unsigned short *)characters;	// 0x35520c35
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x35547195
- (BOOL)getExternalRepresentation:(id *)representation extendedAttributes:(id *)attributes forWritingToURLOrPath:(id)urlorPath usingEncoding:(unsigned)encoding error:(id *)error;	// 0x355a9a25
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length;	// 0x35509b25
- (void)getLineStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x355a90c1
- (void)getParagraphStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x35526e59
- (BOOL)hasPrefix:(id)prefix;	// 0x3552b601
- (BOOL)hasSuffix:(id)suffix;	// 0x35535655
- (unsigned)hash;	// 0x355a8a75
- (int)intValue;	// 0x3550c09d
- (int)integerValue;	// 0x3550c08d
- (BOOL)isAbsolutePath;	// 0x35517125
- (BOOL)isEqual:(id)equal;	// 0x35501b29
- (BOOL)isEqualToString:(id)string;	// 0x35501b79
- (BOOL)isNSString__;	// 0x35516e95
- (id)lastPathComponent;	// 0x35514a51
- (unsigned)length;	// 0x355a84e9
- (unsigned)lengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;	// 0x35504f61
- (NSRange)lineRangeForRange:(NSRange)range;	// 0x355a90f9
- (id)linguisticTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options orthography:(id)orthography tokenRanges:(id *)ranges;	// 0x3562d14d
- (int)localizedCaseInsensitiveCompare:(id)compare;	// 0x355a8a7d
- (int)localizedCompare:(id)compare;	// 0x35534c69
- (int)localizedStandardCompare:(id)compare;	// 0x355a8ad9
- (long long)longLongValue;	// 0x3550fb39
- (const char *)lossyCString;	// 0x355ab459
- (id)lowercaseString;	// 0x3550ccdd
- (id)lowercaseStringWithLocale:(id)locale;	// 0x3550ccf1
- (unsigned)maximumLengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;	// 0x355ab4fd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3554a741
- (NSRange)paragraphRangeForRange:(NSRange)range;	// 0x355a9131
- (id)pathComponents;	// 0x35516f31
- (id)pathExtension;	// 0x35502ed1
- (id)precomposedStringWithCanonicalMapping;	// 0x35529011
- (id)precomposedStringWithCompatibilityMapping;	// 0x355a9031
- (id)propertyList;	// 0x355aaa31
- (id)propertyListFromStringsFileFormat;	// 0x355aab05
- (id)quotedStringRepresentation;	// 0x35525ed1
- (NSRange)rangeOfCharacterFromSet:(id)set;	// 0x3552974d
- (NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options;	// 0x35540b81
- (NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options range:(NSRange)range;	// 0x35514035
- (NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned)index;	// 0x35536871
- (NSRange)rangeOfComposedCharacterSequencesForRange:(NSRange)range;	// 0x355a8b39
- (NSRange)rangeOfString:(id)string;	// 0x354fe131
- (NSRange)rangeOfString:(id)string options:(unsigned)options;	// 0x35510cc9
- (NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x35502ca1
- (NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x354fe181
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x35657681
- (NSRange)significantText;	// 0x3560b9a9
- (unsigned)smallestEncoding;	// 0x355ab495
- (id)standardizedURLPath;	// 0x355b78cd
- (id)stringByAbbreviatingWithTildeInPath;	// 0x3559b759
- (id)stringByAddingPercentEscapes;	// 0x355b7d45
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned)encoding;	// 0x355b7f4d
- (id)stringByAppendingFormat:(id)format;	// 0x3551a41d
- (id)stringByAppendingPathComponent:(id)component;	// 0x355008bd
- (id)stringByAppendingPathExtension:(id)extension;	// 0x355032dd
- (id)stringByAppendingString:(id)string;	// 0x354fed81
- (id)stringByConvertingPathToURL;	// 0x3559c63d
- (id)stringByConvertingURLToPath;	// 0x3559c671
- (id)stringByDeletingLastPathComponent;	// 0x3550cf89
- (id)stringByDeletingPathExtension;	// 0x35529881
- (id)stringByExpandingTildeInPath;	// 0x35527989
- (id)stringByFoldingWithOptions:(unsigned)options locale:(id)locale;	// 0x355a9071
- (id)stringByPaddingToLength:(unsigned)length withString:(id)string startingAtIndex:(unsigned)index;	// 0x355a8df1
- (id)stringByRemovingPercentEscapes;	// 0x355b7d0d
- (id)stringByReplacingCharactersInRange:(NSRange)range withString:(id)string;	// 0x35512d51
- (id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2;	// 0x35503119
- (id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x3550315d
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned)encoding;	// 0x35521be1
- (id)stringByResolvingSymlinksInPath;	// 0x3559b879
- (id)stringByStandardizingPath;	// 0x35506789
- (id)stringByTrimmingCharactersInSet:(id)set;	// 0x355147c9
- (id)stringsByAppendingPaths:(id)paths;	// 0x3559b88d
- (id)substringFromIndex:(unsigned)index;	// 0x354fe43d
- (id)substringToIndex:(unsigned)index;	// 0x354fe3b1
- (id)substringWithRange:(NSRange)range;	// 0x355199b5
- (id)uppercaseString;	// 0x35535561
- (id)uppercaseStringWithLocale:(id)locale;	// 0x35535575
- (id)urlPathRelativeToPath:(id)path;	// 0x355b7d85
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x355a9d11
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id *)error;	// 0x355a9cf5
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x355a9d4d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id *)error;	// 0x355a9bbd
@end


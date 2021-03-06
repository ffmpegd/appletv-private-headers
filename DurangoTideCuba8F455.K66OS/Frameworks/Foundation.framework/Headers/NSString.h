/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (id)_web_stringRepresentationForBytes:(long long)bytes;	// 0x310988e9
+ (id)allocWithZone:(NSZone *)zone;	// 0x30ff99ed
+ (const unsigned *)availableStringEncodings;	// 0x31085615
+ (unsigned)defaultCStringEncoding;	// 0x31085869
+ (void)initialize;	// 0x31010901
+ (id)localizedNameOfStringEncoding:(unsigned)stringEncoding;	// 0x3108568d
+ (id)localizedStringWithFormat:(id)format;	// 0x310329b1
+ (id)pathWithComponents:(id)components;	// 0x3100939d
+ (id)string;	// 0x3101fe95
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x31082711
+ (id)stringWithCString:(const char *)cstring;	// 0x310827a9
+ (id)stringWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x3102dcc1
+ (id)stringWithCString:(const char *)cstring length:(unsigned)length;	// 0x31082619
+ (id)stringWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x31004901
+ (id)stringWithContentsOfFile:(id)file;	// 0x310825e1
+ (id)stringWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id *)error;	// 0x3102b07d
+ (id)stringWithContentsOfFile:(id)file usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x310824dd
+ (id)stringWithContentsOfURL:(id)url;	// 0x310825a9
+ (id)stringWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id *)error;	// 0x31082565
+ (id)stringWithContentsOfURL:(id)url usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x31082521
+ (id)stringWithFormat:(id)format;	// 0x30ff999d
+ (id)stringWithFormat:(id)format locale:(id)locale;	// 0x310852fd
+ (id)stringWithString:(id)string;	// 0x310170f5
+ (id)stringWithUTF8String:(const char *)utf8String;	// 0x3100f579
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x310832cd
- (id)initWithCString:(const char *)cstring;	// 0x31085451
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x3108313d
- (id)initWithCString:(const char *)cstring length:(unsigned)length;	// 0x310853fd
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x310832dd
- (id)initWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x310831bd
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x310832ed
- (id)initWithCoder:(id)coder;	// 0x310832fd
- (id)initWithContentsOfFile:(id)file;	// 0x31032ed9
- (id)initWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id *)error;	// 0x3102b0c1
- (id)initWithContentsOfFile:(id)file usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x31083681
- (id)initWithContentsOfURL:(id)url;	// 0x310822f1
- (id)initWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id *)error;	// 0x31082e21
- (id)initWithContentsOfURL:(id)url usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x31082c49
- (id)initWithData:(id)data encoding:(unsigned)encoding;	// 0x3108234d
- (id)initWithData:(id)data usedEncoding:(unsigned *)encoding;	// 0x31082295
- (id)initWithFormat:(id)format;	// 0x310049e9
- (id)initWithFormat:(id)format arguments:(void *)arguments;	// 0x310205f5
- (id)initWithFormat:(id)format locale:(id)locale;	// 0x3102220d
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x310832bd
- (id)initWithString:(id)string;	// 0x31083cd9
- (id)initWithUTF8String:(const char *)utf8String;	// 0x310149d9
- (const char *)UTF8String;	// 0x30ffba25
- (unsigned long)_cfTypeID;	// 0x31033775
- (id)_copyFormatStringWithConfiguration:(id)configuration;	// 0x31081d9d
- (id)_createSubstringWithRange:(NSRange)range;	// 0x31021309
- (unsigned char)_encodingCantBeStoredInEightBitCFString;	// 0x31007f51
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x31001b99
- (const unsigned short *)_fastCharacterContents;	// 0x31001ce1
- (unsigned long)_fastestEncodingInCFStringEncoding;	// 0x31001ce5
- (void)_flushRegularExpressionCaches;	// 0x30ff8e51
- (void)_getBlockStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range stopAtLineSeparators:(BOOL)lineSeparators;	// 0x31084719
- (BOOL)_getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned long)encoding;	// 0x31018aad
- (id)_initWithBytesOfUnknownEncoding:(char *)unknownEncoding length:(unsigned)length copy:(BOOL)copy usedEncoding:(unsigned *)encoding;	// 0x31083221
- (id)_initWithDataOfUnknownEncoding:(id)unknownEncoding;	// 0x31032f35
- (BOOL)_isCString;	// 0x310824c1
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x31001aa9
- (NSRange)_rangeOfRegularExpressionPattern:(id)regularExpressionPattern options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x310d2435
- (unsigned long)_smallestEncodingInCFStringEncoding;	// 0x31040105
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)regularExpressionPattern withTemplate:(id)aTemplate options:(unsigned)options range:(NSRange)range;	// 0x310d259d
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;	// 0x31007171
- (id)_stringByStandardizingPathUsingCache:(BOOL)cache;	// 0x310056f5
- (id)_stringRepresentation;	// 0x310845c1
- (id)_web_HTTPStyleLanguageCode;	// 0x31096aed
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;	// 0x3109680d
- (id)_web_URLFragment;	// 0x310985e5
- (id)_web_characterSetFromContentTypeHeader_nowarn;	// 0x3109833d
- (int)_web_countOfString:(id)string;	// 0x31098ac1
- (id)_web_domainFromHost;	// 0x31098b35
- (BOOL)_web_domainMatches:(id)matches;	// 0x3109866d
- (unsigned long)_web_extractFourCharCode;	// 0x31098865
- (id)_web_fileNameFromContentDispositionHeader_nowarn;	// 0x31098031
- (id)_web_filenameByFixingIllegalCharacters;	// 0x31099075
- (id)_web_fixedCarbonPOSIXPath;	// 0x31098121
- (BOOL)_web_hasCaseInsensitivePrefix:(id)prefix;	// 0x31034d65
- (BOOL)_web_hasCountryCodeTLD;	// 0x31098739
- (BOOL)_web_isCaseInsensitiveEqualToString:(id)string;	// 0x3100ff79
- (BOOL)_web_isFileURL;	// 0x31098101
- (BOOL)_web_isJavaScriptURL;	// 0x31098305
- (BOOL)_web_looksLikeAbsoluteURL;	// 0x31098631
- (BOOL)_web_looksLikeIPAddress;	// 0x3109879d
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;	// 0x310983e1
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)nowarn;	// 0x31099371
- (id)_web_parseAsKeyValuePair_nowarn;	// 0x310980e9
- (NSRange)_web_rangeOfURLHost;	// 0x31098ded
- (NSRange)_web_rangeOfURLResourceSpecifier_nowarn;	// 0x310995cd
- (NSRange)_web_rangeOfURLScheme_nowarn;	// 0x310994e1
- (NSRange)_web_rangeOfURLUserPasswordHostPort;	// 0x31098d3d
- (id)_web_splitAtNonDateCommas_nowarn;	// 0x310991ad
- (id)_web_stringByCollapsingNonPrintingCharacters;	// 0x31098ea9
- (id)_web_stringByExpandingTildeInPath;	// 0x31098299
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;	// 0x31099621
- (id)_web_stringByTrimmingWhitespace;	// 0x31098c95
- (BOOL)boolValue;	// 0x30fffed9
- (const char *)cString;	// 0x310859bd
- (unsigned)cStringLength;	// 0x3100130d
- (const char *)cStringUsingEncoding:(unsigned)encoding;	// 0x3100e7a5
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x31034ca9
- (id)capitalizedString;	// 0x310336c1
- (int)caseInsensitiveCompare:(id)compare;	// 0x310041cd
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x31081d6d
- (Class)classForCoder;	// 0x31081c91
- (id)commonPrefixWithString:(id)string options:(unsigned)options;	// 0x31083e09
- (int)compare:(id)compare;	// 0x3101cff9
- (int)compare:(id)compare options:(unsigned)options;	// 0x3100ff99
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x31004215
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x31004241
- (unsigned)completePathIntoString:(id *)string caseSensitive:(BOOL)sensitive matchesIntoArray:(id *)array filterTypes:(id)types;	// 0x31076b59
- (id)componentsSeparatedByCharactersInSet:(id)set;	// 0x310332b9
- (id)componentsSeparatedByString:(id)string;	// 0x31000619
- (id)copyWithZone:(NSZone *)zone;	// 0x31082491
- (id)dataUsingEncoding:(unsigned)encoding;	// 0x31004a19
- (id)dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;	// 0x31004a31
- (XXStruct_9isexA)decimalValue;	// 0x31094c0d
- (id)decomposedStringWithCanonicalMapping;	// 0x31082909
- (id)decomposedStringWithCompatibilityMapping;	// 0x310828d5
- (id)description;	// 0x30ff9b2d
- (id)displayableString;	// 0x31084d51
- (double)doubleValue;	// 0x3100aa45
- (void)encodeWithCoder:(id)coder;	// 0x31034a69
- (void)enumerateLinesUsingBlock:(id)block;	// 0x31083b01
- (void)enumerateSubstringsInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x31083fdd
- (unsigned)fastestEncoding;	// 0x31001cfd
- (const char *)fileSystemRepresentation;	// 0x31006c51
- (float)floatValue;	// 0x31030295
- (id)formatConfiguration;	// 0x31081d69
- (BOOL)getBytes:(char *)bytes maxLength:(unsigned)length filledLength:(unsigned *)length3 encoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x31018b29
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x30ffbca1
- (void)getCString:(char *)string;	// 0x31085819
- (void)getCString:(char *)string maxLength:(unsigned)length;	// 0x310857cd
- (BOOL)getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned)encoding;	// 0x31028fb9
- (void)getCString:(char *)string maxLength:(unsigned)length range:(NSRange)range remainingRange:(NSRange *)range4;	// 0x3108588d
- (void)getCharacters:(unsigned short *)characters;	// 0x310048c1
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x31082449
- (BOOL)getExternalRepresentation:(id *)representation extendedAttributes:(id *)attributes forWritingToURLOrPath:(id)urlorPath usingEncoding:(unsigned)encoding error:(id *)error;	// 0x31083b75
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length;	// 0x30fffa05
- (void)getLineStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x31082415
- (void)getParagraphStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x310823e1
- (BOOL)hasPrefix:(id)prefix;	// 0x3101ab01
- (BOOL)hasSuffix:(id)suffix;	// 0x31036465
- (unsigned)hash;	// 0x31082661
- (int)intValue;	// 0x31018b7d
- (int)integerValue;	// 0x31020db5
- (BOOL)isAbsolutePath;	// 0x31013191
- (BOOL)isEqual:(id)equal;	// 0x3100600d
- (BOOL)isEqualToString:(id)string;	// 0x31006051
- (BOOL)isNSString__;	// 0x30fff61d
- (id)lastPathComponent;	// 0x31030aa1
- (unsigned)length;	// 0x31081d85
- (unsigned)lengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;	// 0x31004e81
- (NSRange)lineRangeForRange:(NSRange)range;	// 0x31083a79
- (int)localizedCaseInsensitiveCompare:(id)compare;	// 0x31032b7d
- (int)localizedCompare:(id)compare;	// 0x310200e5
- (int)localizedStandardCompare:(id)compare;	// 0x31083855
- (long long)longLongValue;	// 0x3102089d
- (const char *)lossyCString;	// 0x310859f9
- (id)lowercaseString;	// 0x310007dd
- (unsigned)maximumLengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;	// 0x3102b405
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31018a01
- (NSRange)paragraphRangeForRange:(NSRange)range;	// 0x31083abd
- (id)pathComponents;	// 0x31012fbd
- (id)pathExtension;	// 0x31000b3d
- (id)precomposedStringWithCanonicalMapping;	// 0x31034d31
- (id)precomposedStringWithCompatibilityMapping;	// 0x310828a1
- (id)propertyList;	// 0x3108522d
- (id)propertyListFromStringsFileFormat;	// 0x31082265
- (id)quotedStringRepresentation;	// 0x31084fdd
- (NSRange)rangeOfCharacterFromSet:(id)set;	// 0x3102017d
- (NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options;	// 0x3102ea0d
- (NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options range:(NSRange)range;	// 0x310201cd
- (NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned)index;	// 0x310838b9
- (NSRange)rangeOfComposedCharacterSequencesForRange:(NSRange)range;	// 0x31083d79
- (NSRange)rangeOfString:(id)string;	// 0x30ff8bdd
- (NSRange)rangeOfString:(id)string options:(unsigned)options;	// 0x3101688d
- (NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x31000795
- (NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x30ff8c39
- (NSRange)significantText;	// 0x310dcfd9
- (unsigned)smallestEncoding;	// 0x3108576d
- (id)standardizedURLPath;	// 0x31091a51
- (id)stringByAbbreviatingWithTildeInPath;	// 0x3102aca1
- (id)stringByAddingPercentEscapes;	// 0x31091e0d
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned)encoding;	// 0x3102b009
- (id)stringByAppendingFormat:(id)format;	// 0x3102b355
- (id)stringByAppendingPathComponent:(id)component;	// 0x310020ed
- (id)stringByAppendingPathExtension:(id)extension;	// 0x31001389
- (id)stringByAppendingString:(id)string;	// 0x31000ecd
- (id)stringByConvertingPathToURL;	// 0x3107646d
- (id)stringByConvertingURLToPath;	// 0x31076531
- (id)stringByDeletingLastPathComponent;	// 0x3101aa31
- (id)stringByDeletingPathExtension;	// 0x31019209
- (id)stringByExpandingTildeInPath;	// 0x310068c9
- (id)stringByFoldingWithOptions:(unsigned)options locale:(id)locale;	// 0x3108293d
- (id)stringByPaddingToLength:(unsigned)length withString:(id)string startingAtIndex:(unsigned)index;	// 0x31083925
- (id)stringByRemovingPercentEscapes;	// 0x31091de1
- (id)stringByReplacingCharactersInRange:(NSRange)range withString:(id)string;	// 0x3108266d
- (id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2;	// 0x31000d69
- (id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x31000db5
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned)encoding;	// 0x3101859d
- (id)stringByResolvingSymlinksInPath;	// 0x3101a9c5
- (id)stringByStandardizingPath;	// 0x310056dd
- (id)stringByTrimmingCharactersInSet:(id)set;	// 0x31020621
- (id)stringsByAppendingPaths:(id)paths;	// 0x31076a0d
- (id)substringFromIndex:(unsigned)index;	// 0x30ff904d
- (id)substringToIndex:(unsigned)index;	// 0x30ff8e89
- (id)substringWithRange:(NSRange)range;	// 0x31001991
- (id)uppercaseString;	// 0x31000811
- (id)urlPathRelativeToPath:(id)path;	// 0x31090969
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x310823a5
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id *)error;	// 0x310830fd
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x31085381
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id *)error;	// 0x3108311d
@end


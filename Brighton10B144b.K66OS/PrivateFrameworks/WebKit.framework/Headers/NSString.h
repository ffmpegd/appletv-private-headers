/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (WebKitExtras)
+ (id)_web_stringWithData:(id)data textEncodingName:(id)name;	// 0x365ee6dd
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)bundleIdentifier;	// 0x365936cd
- (id)_web_stringByAbbreviatingWithTildeInPath;	// 0x365ee211
- (id)_web_stringByStrippingReturnCharacters;	// 0x365ee29d
- (id)_webkit_filenameByFixingIllegalCharacters;	// 0x365ee361
- (BOOL)_webkit_hasCaseInsensitivePrefix:(id)prefix;	// 0x365a20fd
- (BOOL)_webkit_hasCaseInsensitiveSubstring:(id)substring;	// 0x365ee355
- (BOOL)_webkit_hasCaseInsensitiveSuffix:(id)suffix;	// 0x365ee349
- (BOOL)_webkit_isCaseInsensitiveEqualToString:(id)string;	// 0x36591139
- (id)_webkit_stringByCollapsingNonPrintingCharacters;	// 0x365ee365
- (id)_webkit_stringByCollapsingWhitespaceCharacters;	// 0x365ee545
- (id)_webkit_stringByTrimmingWhitespace;	// 0x3659cefd
@end

@interface NSString (WebNSDataExtrasInternal)
- (id)_web_capitalizeRFC822HeaderFieldName;	// 0x365f00ed
@end

@interface NSString (WebStringDrawing)
+ (BOOL)_web_ascentRoundingEnabled;	// 0x365831c9
+ (void)_web_setAscentRoundingEnabled:(BOOL)enabled;	// 0x36585bcd
+ (void)_web_setWordRoundingAllowed:(BOOL)allowed;	// 0x36583c21
+ (void)_web_setWordRoundingEnabled:(BOOL)enabled;	// 0x36583169
+ (BOOL)_web_wordRoundingAllowed;	// 0x36583c11
+ (BOOL)_web_wordRoundingEnabled;	// 0x36583159
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only;	// 0x36583235
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x36583295
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x36583301
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only;	// 0x36583d15
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x36583d95
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x36583e19
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withAttributes:(id)attributes;	// 0x365f1c3d
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x365f1335
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x365f1389
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x365831d9
- (CGSize)_web_drawAtPoint:(CGPoint)point withFont:(GSFontRef)font;	// 0x365f12a9
- (CGSize)_web_drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x365f1e51
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment;	// 0x365f1449
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing;	// 0x365f13e1
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7;	// 0x36585b61
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7 measureOnly:(BOOL)only;	// 0x36583c95
- (id)_web_securedStringIncludingLastCharacter:(BOOL)character;	// 0x365f150d
- (CGSize)_web_sizeForWidth:(float)width withAttributes:(id)attributes;	// 0x365f1b35
- (CGSize)_web_sizeInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x365f1d45
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x365f14ad
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis lineSpacing:(int)spacing;	// 0x36583c31
- (CGSize)_web_sizeWithFont:(GSFontRef)font;	// 0x36583119
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis;	// 0x365f12f9
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x36581d41
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing resultRange:(NSRange *)range;	// 0x36581d8d
- (id)_web_stringForWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x365f1809
@end

@interface NSString (WebNSStringExtrasIOS)
- (id)_web_bestURLForUserTypedString;	// 0x365acb3d
- (id)_web_possibleURLPrefixesForUserTypedString;	// 0x365f2269
- (id)_web_possibleURLsForForUserTypedString:(BOOL)userTypedString;	// 0x365acba9
- (id)_web_possibleURLsForUserTypedString;	// 0x365acb95
@end

@interface NSString (WebNSURLExtras)
- (id)_web_decodeHostName;	// 0x365f2f41
- (id)_web_decodeHostNameWithRange:(NSRange)range;	// 0x365f2f31
- (id)_web_encodeHostName;	// 0x365f2f45
- (id)_web_encodeHostNameWithRange:(NSRange)range;	// 0x365f2f39
- (BOOL)_web_hostNameNeedsDecodingWithRange:(NSRange)range;	// 0x365f2f11
- (BOOL)_web_hostNameNeedsEncodingWithRange:(NSRange)range;	// 0x365f2f21
- (BOOL)_web_isUserVisibleURL;	// 0x365f2c71
- (id)_webkit_URLFragment;	// 0x365f3079
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x365f2ead
- (BOOL)_webkit_isFileURL;	// 0x365f2c7d
- (BOOL)_webkit_isJavaScriptURL;	// 0x365a20dd
- (BOOL)_webkit_looksLikeAbsoluteURL;	// 0x365f302d
- (id)_webkit_queryKeysAndValues;	// 0x365ac6c9
- (NSRange)_webkit_rangeOfURLScheme;	// 0x365f2f49
- (id)_webkit_scriptIfJavaScriptURL;	// 0x365a2091
- (id)_webkit_stringByReplacingValidPercentEscapes;	// 0x365f2cc5
- (id)_webkit_unescapedQueryValue;	// 0x365ac919
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (WebKitExtras)
+ (id)_web_stringWithData:(id)data textEncodingName:(id)name;	// 0x365f06dd
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)bundleIdentifier;	// 0x365956cd
- (id)_web_stringByAbbreviatingWithTildeInPath;	// 0x365f0211
- (id)_web_stringByStrippingReturnCharacters;	// 0x365f029d
- (id)_webkit_filenameByFixingIllegalCharacters;	// 0x365f0361
- (BOOL)_webkit_hasCaseInsensitivePrefix:(id)prefix;	// 0x365a40fd
- (BOOL)_webkit_hasCaseInsensitiveSubstring:(id)substring;	// 0x365f0355
- (BOOL)_webkit_hasCaseInsensitiveSuffix:(id)suffix;	// 0x365f0349
- (BOOL)_webkit_isCaseInsensitiveEqualToString:(id)string;	// 0x36593139
- (id)_webkit_stringByCollapsingNonPrintingCharacters;	// 0x365f0365
- (id)_webkit_stringByCollapsingWhitespaceCharacters;	// 0x365f0545
- (id)_webkit_stringByTrimmingWhitespace;	// 0x3659eefd
@end

@interface NSString (WebNSDataExtrasInternal)
- (id)_web_capitalizeRFC822HeaderFieldName;	// 0x365f20ed
@end

@interface NSString (WebStringDrawing)
+ (BOOL)_web_ascentRoundingEnabled;	// 0x365851c9
+ (void)_web_setAscentRoundingEnabled:(BOOL)enabled;	// 0x36587bcd
+ (void)_web_setWordRoundingAllowed:(BOOL)allowed;	// 0x36585c21
+ (void)_web_setWordRoundingEnabled:(BOOL)enabled;	// 0x36585169
+ (BOOL)_web_wordRoundingAllowed;	// 0x36585c11
+ (BOOL)_web_wordRoundingEnabled;	// 0x36585159
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only;	// 0x36585235
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x36585295
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x36585301
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only;	// 0x36585d15
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x36585d95
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x36585e19
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withAttributes:(id)attributes;	// 0x365f3c3d
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x365f3335
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x365f3389
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x365851d9
- (CGSize)_web_drawAtPoint:(CGPoint)point withFont:(GSFontRef)font;	// 0x365f32a9
- (CGSize)_web_drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x365f3e51
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment;	// 0x365f3449
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing;	// 0x365f33e1
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7;	// 0x36587b61
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7 measureOnly:(BOOL)only;	// 0x36585c95
- (id)_web_securedStringIncludingLastCharacter:(BOOL)character;	// 0x365f350d
- (CGSize)_web_sizeForWidth:(float)width withAttributes:(id)attributes;	// 0x365f3b35
- (CGSize)_web_sizeInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x365f3d45
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x365f34ad
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis lineSpacing:(int)spacing;	// 0x36585c31
- (CGSize)_web_sizeWithFont:(GSFontRef)font;	// 0x36585119
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis;	// 0x365f32f9
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x36583d41
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing resultRange:(NSRange *)range;	// 0x36583d8d
- (id)_web_stringForWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x365f3809
@end

@interface NSString (WebNSStringExtrasIOS)
- (id)_web_bestURLForUserTypedString;	// 0x365aeb3d
- (id)_web_possibleURLPrefixesForUserTypedString;	// 0x365f4269
- (id)_web_possibleURLsForForUserTypedString:(BOOL)userTypedString;	// 0x365aeba9
- (id)_web_possibleURLsForUserTypedString;	// 0x365aeb95
@end

@interface NSString (WebNSURLExtras)
- (id)_web_decodeHostName;	// 0x365f4f41
- (id)_web_decodeHostNameWithRange:(NSRange)range;	// 0x365f4f31
- (id)_web_encodeHostName;	// 0x365f4f45
- (id)_web_encodeHostNameWithRange:(NSRange)range;	// 0x365f4f39
- (BOOL)_web_hostNameNeedsDecodingWithRange:(NSRange)range;	// 0x365f4f11
- (BOOL)_web_hostNameNeedsEncodingWithRange:(NSRange)range;	// 0x365f4f21
- (BOOL)_web_isUserVisibleURL;	// 0x365f4c71
- (id)_webkit_URLFragment;	// 0x365f5079
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x365f4ead
- (BOOL)_webkit_isFileURL;	// 0x365f4c7d
- (BOOL)_webkit_isJavaScriptURL;	// 0x365a40dd
- (BOOL)_webkit_looksLikeAbsoluteURL;	// 0x365f502d
- (id)_webkit_queryKeysAndValues;	// 0x365ae6c9
- (NSRange)_webkit_rangeOfURLScheme;	// 0x365f4f49
- (id)_webkit_scriptIfJavaScriptURL;	// 0x365a4091
- (id)_webkit_stringByReplacingValidPercentEscapes;	// 0x365f4cc5
- (id)_webkit_unescapedQueryValue;	// 0x365ae919
@end


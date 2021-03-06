/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSURL.h> // Unknown library


@interface NSURL (ISAdditions)
+ (id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;	// 0x36873c4d
+ (id)escapedStringForString:(id)string;	// 0x36873dd5
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;	// 0x36873e15
+ (id)unescapedStringForString:(id)string;	// 0x36873f15
- (id)URLByAppendingQueryParameter:(id)parameter value:(id)value;	// 0x36873f9d
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;	// 0x36873f61
- (void)enumerateQueryWithBlock:(id)block;	// 0x36874979
- (BOOL)isSafeExternalURL;	// 0x368743c9
- (id)schemeSwizzledURL;	// 0x368745d5
- (id)urlByReplacingSchemeWithScheme:(id)scheme;	// 0x368748ed
- (id)urlBySettingQueryStringDictionary:(id)dictionary;	// 0x3687408d
@end

@interface NSURL (ISURLBagAdditions)
- (id)sanitizedURL;	// 0x3687ec91
@end


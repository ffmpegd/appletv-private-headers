/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSURL.h> // Unknown library


@interface NSURL (ISAdditions)
+ (id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;	// 0x36034795
+ (id)escapedStringForString:(id)string;	// 0x3603491d
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;	// 0x3603495d
+ (id)unescapedStringForString:(id)string;	// 0x36034a5d
- (id)URLByAppendingQueryParameter:(id)parameter value:(id)value;	// 0x36034ae5
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;	// 0x36034aa9
- (void)enumerateQueryWithBlock:(id)block;	// 0x360354c1
- (BOOL)isSafeExternalURL;	// 0x36034f11
- (id)schemeSwizzledURL;	// 0x3603511d
- (id)urlByReplacingSchemeWithScheme:(id)scheme;	// 0x36035435
- (id)urlBySettingQueryStringDictionary:(id)dictionary;	// 0x36034bd5
@end

@interface NSURL (ISURLBagAdditions)
- (id)sanitizedURL;	// 0x3603f7d9
@end


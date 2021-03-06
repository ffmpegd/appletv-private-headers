/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {
}
+ (id)ISOCountryCodes;	// 0x37149db1
+ (id)ISOCurrencyCodes;	// 0x37149ddd
+ (id)ISOLanguageCodes;	// 0x37149d85
+ (id)allocWithZone:(NSZone *)zone;	// 0x370a603d
+ (id)availableLocaleIdentifiers;	// 0x37149d59
+ (id)canonicalLanguageIdentifierFromString:(id)string;	// 0x370b19cd
+ (id)canonicalLocaleIdentifierFromString:(id)string;	// 0x37149e35
+ (unsigned)characterDirectionForLanguage:(id)language;	// 0x370cf68d
+ (id)commonISOCurrencyCodes;	// 0x37149e09
+ (id)componentsFromLocaleIdentifier:(id)localeIdentifier;	// 0x370b1955
+ (id)currentLocale;	// 0x370a5225
+ (id)internetServicesRegion;	// 0x37149ee9
+ (unsigned)lineDirectionForLanguage:(id)language;	// 0x37149eb5
+ (id)localeIdentifierFromComponents:(id)components;	// 0x370b1991
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned)windowsLocaleCode;	// 0x37149e71
+ (id)localeWithLocaleIdentifier:(id)localeIdentifier;	// 0x37149d1d
+ (id)preferredLanguages;	// 0x370b1791
+ (BOOL)supportsSecureCoding;	// 0x37149cd9
+ (id)systemLocale;	// 0x37149cf5
+ (unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)localeIdentifier;	// 0x37149ead
- (id)init;	// 0x37149c15
- (id)initWithCoder:(id)coder;	// 0x37149cdd
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x37149cf9
- (unsigned long)_cfTypeID;	// 0x37149c29
- (id)_copyDisplayNameForKey:(id)key value:(id)value;	// 0x37149ebd
- (id)_prefs;	// 0x37149ee5
- (id)copyWithZone:(NSZone *)zone;	// 0x370c15c1
- (id)displayNameForKey:(id)key value:(id)value;	// 0x37149bf1
- (void)encodeWithCoder:(id)coder;	// 0x37149ce1
- (unsigned)hash;	// 0x37149c2d
- (id)identifier;	// 0x37149ce5
- (BOOL)isEqual:(id)equal;	// 0x37149c55
- (id)localeIdentifier;	// 0x370b1775
- (id)objectForKey:(id)key;	// 0x37149bcd
@end


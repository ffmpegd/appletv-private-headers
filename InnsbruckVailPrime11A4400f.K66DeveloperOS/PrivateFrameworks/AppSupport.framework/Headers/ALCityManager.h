/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import </libobjc.A.h>

@class CPSearchMatcher;

@interface ALCityManager : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	sqlite3 *_localizedDb;	// 8 = 0x8
	CPSearchMatcher *_citySearchMatcher;	// 12 = 0xc
}
@property(readonly, assign) CPSearchMatcher *citySearchMatcher;	// G=0x2ffedb19; @synthesize=_citySearchMatcher
+ (CFArrayRef)legacyCityForCity:(id)city;	// 0x2ffeccb5
+ (id)newCitiesByIdentifierMap:(id)map;	// 0x2ffec501
+ (id)sharedManager;	// 0x2ffeb8bd
- (id)init;	// 0x2ffeb679
- (id)allCities;	// 0x2ffeb905
- (id)bestCityForLegacyCity:(CFArrayRef)legacyCity;	// 0x2ffecaf1
- (id)citiesMatchingName:(id)name;	// 0x2ffeb951
- (id)citiesMatchingName:(id)name localized:(BOOL)localized;	// 0x2ffeb965
- (id)citiesMatchingQualifier:(id)qualifier;	// 0x2ffeceb5
- (id)citiesWithIdentifiers:(id)identifiers;	// 0x2ffec665
- (id)citiesWithTimeZone:(id)timeZone;	// 0x2ffeda45
- (id)cityForClassicIdentifier:(id)classicIdentifier;	// 0x2ffec949
// declared property getter: - (id)citySearchMatcher;	// 0x2ffedb19
- (void)dealloc;	// 0x2ffedaa1
- (id)defaultCitiesForLocaleCode:(id)localeCode;	// 0x2ffed60d
- (id)defaultCitiesForLocaleCode:(id)localeCode options:(int)options;	// 0x2ffed2ed
- (id)defaultCityForTimeZone:(id)timeZone;	// 0x2ffed621
- (id)localeWithCode:(id)code;	// 0x2ffed035
- (void)localizeCities:(id)cities;	// 0x2ffebd71
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable {
	NSString *_country;	// 4 = 0x4
	NSString *_countryCode;	// 8 = 0x8
	NSString *_administrativeArea;	// 12 = 0xc
	NSString *_administrativeAreaCode;	// 16 = 0x10
	NSString *_subAdministrativeArea;	// 20 = 0x14
	NSString *_locality;	// 24 = 0x18
	NSString *_postCode;	// 28 = 0x1c
	NSString *_subLocality;	// 32 = 0x20
	NSString *_premises;	// 36 = 0x24
	NSString *_thoroughfare;	// 40 = 0x28
	NSString *_subThoroughfare;	// 44 = 0x2c
	NSString *_fullThoroughfare;	// 48 = 0x30
	NSString *_postCodeExtension;	// 52 = 0x34
	NSMutableArray *_areaOfInterests;	// 56 = 0x38
	NSString *_inlandWater;	// 60 = 0x3c
	NSString *_ocean;	// 64 = 0x40
	NSMutableArray *_dependentLocalitys;	// 68 = 0x44
	XXStruct_19EQxD _geoIds;	// 72 = 0x48
}
@property(retain, nonatomic) NSString *administrativeArea;	// G=0x31d0861d; S=0x31d0862d; @synthesize=_administrativeArea
@property(retain, nonatomic) NSString *administrativeAreaCode;	// G=0x31d08651; S=0x31d08661; @synthesize=_administrativeAreaCode
@property(retain, nonatomic) NSMutableArray *areaOfInterests;	// G=0x31d08859; S=0x31d08869; @synthesize=_areaOfInterests
@property(retain, nonatomic) NSString *country;	// G=0x31d085b5; S=0x31d085c5; @synthesize=_country
@property(retain, nonatomic) NSString *countryCode;	// G=0x31d085e9; S=0x31d085f9; @synthesize=_countryCode
@property(retain, nonatomic) NSMutableArray *dependentLocalitys;	// G=0x31d088f5; S=0x31d08905; @synthesize=_dependentLocalitys
@property(retain, nonatomic) NSString *fullThoroughfare;	// G=0x31d087f1; S=0x31d08801; @synthesize=_fullThoroughfare
@property(readonly, assign, nonatomic) long long *geoIds;	// G=0x31d07a21; 
@property(readonly, assign, nonatomic) unsigned geoIdsCount;	// G=0x31d07a0d; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeArea;	// G=0x31d0778d; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeAreaCode;	// G=0x31d077a5; 
@property(readonly, assign, nonatomic) BOOL hasCountry;	// G=0x31d0775d; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x31d07775; 
@property(readonly, assign, nonatomic) BOOL hasFullThoroughfare;	// G=0x31d07865; 
@property(readonly, assign, nonatomic) BOOL hasInlandWater;	// G=0x31d07939; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x31d077d5; 
@property(readonly, assign, nonatomic) BOOL hasOcean;	// G=0x31d07951; 
@property(readonly, assign, nonatomic) BOOL hasPostCode;	// G=0x31d077ed; 
@property(readonly, assign, nonatomic) BOOL hasPostCodeExtension;	// G=0x31d0787d; 
@property(readonly, assign, nonatomic) BOOL hasPremises;	// G=0x31d0781d; 
@property(readonly, assign, nonatomic) BOOL hasSubAdministrativeArea;	// G=0x31d077bd; 
@property(readonly, assign, nonatomic) BOOL hasSubLocality;	// G=0x31d07805; 
@property(readonly, assign, nonatomic) BOOL hasSubThoroughfare;	// G=0x31d0784d; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x31d07835; 
@property(retain, nonatomic) NSString *inlandWater;	// G=0x31d0888d; S=0x31d0889d; @synthesize=_inlandWater
@property(retain, nonatomic) NSString *locality;	// G=0x31d086b9; S=0x31d086c9; @synthesize=_locality
@property(retain, nonatomic) NSString *ocean;	// G=0x31d088c1; S=0x31d088d1; @synthesize=_ocean
@property(retain, nonatomic) NSString *postCode;	// G=0x31d086ed; S=0x31d086fd; @synthesize=_postCode
@property(retain, nonatomic) NSString *postCodeExtension;	// G=0x31d08825; S=0x31d08835; @synthesize=_postCodeExtension
@property(retain, nonatomic) NSString *premises;	// G=0x31d08755; S=0x31d08765; @synthesize=_premises
@property(retain, nonatomic) NSString *subAdministrativeArea;	// G=0x31d08685; S=0x31d08695; @synthesize=_subAdministrativeArea
@property(retain, nonatomic) NSString *subLocality;	// G=0x31d08721; S=0x31d08731; @synthesize=_subLocality
@property(retain, nonatomic) NSString *subThoroughfare;	// G=0x31d087bd; S=0x31d087cd; @synthesize=_subThoroughfare
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x31d08789; S=0x31d08799; @synthesize=_thoroughfare
- (void)addAreaOfInterest:(id)interest;	// 0x31d07895
- (void)addDependentLocality:(id)locality;	// 0x31d07969
- (void)addGeoId:(long long)anId;	// 0x31d07a45
// declared property getter: - (id)administrativeArea;	// 0x31d0861d
// declared property getter: - (id)administrativeAreaCode;	// 0x31d08651
- (id)areaOfInterestAtIndex:(unsigned)index;	// 0x31d07919
// declared property getter: - (id)areaOfInterests;	// 0x31d08859
- (unsigned)areaOfInterestsCount;	// 0x31d078f9
- (void)clearGeoIds;	// 0x31d07a31
// declared property getter: - (id)country;	// 0x31d085b5
// declared property getter: - (id)countryCode;	// 0x31d085e9
- (void)dealloc;	// 0x31d075c9
- (id)dependentLocalityAtIndex:(unsigned)index;	// 0x31d079ed
// declared property getter: - (id)dependentLocalitys;	// 0x31d088f5
- (unsigned)dependentLocalitysCount;	// 0x31d079cd
- (id)description;	// 0x31d07b1d
- (id)dictionaryRepresentation;	// 0x31d07b8d
// declared property getter: - (id)fullThoroughfare;	// 0x31d087f1
- (long long)geoIdAtIndex:(unsigned)index;	// 0x31d07a5d
// declared property getter: - (long long *)geoIds;	// 0x31d07a21
// declared property getter: - (unsigned)geoIdsCount;	// 0x31d07a0d
// declared property getter: - (BOOL)hasAdministrativeArea;	// 0x31d0778d
// declared property getter: - (BOOL)hasAdministrativeAreaCode;	// 0x31d077a5
// declared property getter: - (BOOL)hasCountry;	// 0x31d0775d
// declared property getter: - (BOOL)hasCountryCode;	// 0x31d07775
// declared property getter: - (BOOL)hasFullThoroughfare;	// 0x31d07865
// declared property getter: - (BOOL)hasInlandWater;	// 0x31d07939
// declared property getter: - (BOOL)hasLocality;	// 0x31d077d5
// declared property getter: - (BOOL)hasOcean;	// 0x31d07951
// declared property getter: - (BOOL)hasPostCode;	// 0x31d077ed
// declared property getter: - (BOOL)hasPostCodeExtension;	// 0x31d0787d
// declared property getter: - (BOOL)hasPremises;	// 0x31d0781d
// declared property getter: - (BOOL)hasSubAdministrativeArea;	// 0x31d077bd
// declared property getter: - (BOOL)hasSubLocality;	// 0x31d07805
// declared property getter: - (BOOL)hasSubThoroughfare;	// 0x31d0784d
// declared property getter: - (BOOL)hasThoroughfare;	// 0x31d07835
// declared property getter: - (id)inlandWater;	// 0x31d0888d
// declared property getter: - (id)locality;	// 0x31d086b9
// declared property getter: - (id)ocean;	// 0x31d088c1
// declared property getter: - (id)postCode;	// 0x31d086ed
// declared property getter: - (id)postCodeExtension;	// 0x31d08825
// declared property getter: - (id)premises;	// 0x31d08755
- (BOOL)readFrom:(id)from;	// 0x31d07ed1
// declared property setter: - (void)setAdministrativeArea:(id)area;	// 0x31d0862d
// declared property setter: - (void)setAdministrativeAreaCode:(id)code;	// 0x31d08661
// declared property setter: - (void)setAreaOfInterests:(id)interests;	// 0x31d08869
// declared property setter: - (void)setCountry:(id)country;	// 0x31d085c5
// declared property setter: - (void)setCountryCode:(id)code;	// 0x31d085f9
// declared property setter: - (void)setDependentLocalitys:(id)localitys;	// 0x31d08905
// declared property setter: - (void)setFullThoroughfare:(id)thoroughfare;	// 0x31d08801
- (void)setGeoIds:(long long *)ids count:(unsigned)count;	// 0x31d07b05
// declared property setter: - (void)setInlandWater:(id)water;	// 0x31d0889d
// declared property setter: - (void)setLocality:(id)locality;	// 0x31d086c9
// declared property setter: - (void)setOcean:(id)ocean;	// 0x31d088d1
// declared property setter: - (void)setPostCode:(id)code;	// 0x31d086fd
// declared property setter: - (void)setPostCodeExtension:(id)extension;	// 0x31d08835
// declared property setter: - (void)setPremises:(id)premises;	// 0x31d08765
// declared property setter: - (void)setSubAdministrativeArea:(id)area;	// 0x31d08695
// declared property setter: - (void)setSubLocality:(id)locality;	// 0x31d08731
// declared property setter: - (void)setSubThoroughfare:(id)thoroughfare;	// 0x31d087cd
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x31d08799
// declared property getter: - (id)subAdministrativeArea;	// 0x31d08685
// declared property getter: - (id)subLocality;	// 0x31d08721
// declared property getter: - (id)subThoroughfare;	// 0x31d087bd
// declared property getter: - (id)thoroughfare;	// 0x31d08789
- (void)writeTo:(id)to;	// 0x31d08229
@end


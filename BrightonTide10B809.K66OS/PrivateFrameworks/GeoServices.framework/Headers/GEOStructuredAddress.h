/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSString;

@interface GEOStructuredAddress : PBCodable {
	XXStruct_19EQxD _geoIds;	// 4 = 0x4
	NSString *_administrativeArea;	// 16 = 0x10
	NSString *_administrativeAreaCode;	// 20 = 0x14
	NSMutableArray *_areaOfInterests;	// 24 = 0x18
	NSString *_country;	// 28 = 0x1c
	NSString *_countryCode;	// 32 = 0x20
	NSMutableArray *_dependentLocalitys;	// 36 = 0x24
	NSString *_fullThoroughfare;	// 40 = 0x28
	NSString *_inlandWater;	// 44 = 0x2c
	NSString *_locality;	// 48 = 0x30
	NSString *_ocean;	// 52 = 0x34
	NSString *_postCode;	// 56 = 0x38
	NSString *_postCodeExtension;	// 60 = 0x3c
	NSString *_premise;	// 64 = 0x40
	NSString *_premises;	// 68 = 0x44
	NSString *_subAdministrativeArea;	// 72 = 0x48
	NSString *_subLocality;	// 76 = 0x4c
	NSMutableArray *_subPremises;	// 80 = 0x50
	NSString *_subThoroughfare;	// 84 = 0x54
	NSString *_thoroughfare;	// 88 = 0x58
}
@property(retain, nonatomic) NSString *administrativeArea;	// G=0x33f72a6d; S=0x33f73631; @synthesize=_administrativeArea
@property(retain, nonatomic) NSString *administrativeAreaCode;	// G=0x33fafbb9; S=0x33f73641; @synthesize=_administrativeAreaCode
@property(retain, nonatomic) NSMutableArray *areaOfInterests;	// G=0x33fafbd9; S=0x33f736e1; @synthesize=_areaOfInterests
@property(retain, nonatomic) NSString *country;	// G=0x33f72aed; S=0x33f73611; @synthesize=_country
@property(retain, nonatomic) NSString *countryCode;	// G=0x33f72a2d; S=0x33f73621; @synthesize=_countryCode
@property(retain, nonatomic) NSMutableArray *dependentLocalitys;	// G=0x33fafbe9; S=0x33f73711; @synthesize=_dependentLocalitys
@property(retain, nonatomic) NSString *fullThoroughfare;	// G=0x33f72a3d; S=0x33f736c1; @synthesize=_fullThoroughfare
@property(readonly, assign, nonatomic) long long *geoIds;	// G=0x33fae99d; 
@property(readonly, assign, nonatomic) unsigned geoIdsCount;	// G=0x33fae989; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeArea;	// G=0x33fae641; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeAreaCode;	// G=0x33fae659; 
@property(readonly, assign, nonatomic) BOOL hasCountry;	// G=0x33fae611; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x33fae629; 
@property(readonly, assign, nonatomic) BOOL hasFullThoroughfare;	// G=0x33fae719; 
@property(readonly, assign, nonatomic) BOOL hasInlandWater;	// G=0x33fae815; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x33fae689; 
@property(readonly, assign, nonatomic) BOOL hasOcean;	// G=0x33fae82d; 
@property(readonly, assign, nonatomic) BOOL hasPostCode;	// G=0x33fae6a1; 
@property(readonly, assign, nonatomic) BOOL hasPostCodeExtension;	// G=0x33fae731; 
@property(readonly, assign, nonatomic) BOOL hasPremise;	// G=0x33fae8a5; 
@property(readonly, assign, nonatomic) BOOL hasPremises;	// G=0x33fae6d1; 
@property(readonly, assign, nonatomic) BOOL hasSubAdministrativeArea;	// G=0x33fae671; 
@property(readonly, assign, nonatomic) BOOL hasSubLocality;	// G=0x33fae6b9; 
@property(readonly, assign, nonatomic) BOOL hasSubThoroughfare;	// G=0x33fae701; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x33fae6e9; 
@property(retain, nonatomic) NSString *inlandWater;	// G=0x33f72acd; S=0x33f736f1; @synthesize=_inlandWater
@property(retain, nonatomic) NSString *locality;	// G=0x33f72a5d; S=0x33f73661; @synthesize=_locality
@property(retain, nonatomic) NSString *ocean;	// G=0x33f72add; S=0x33f73701; @synthesize=_ocean
@property(retain, nonatomic) NSString *postCode;	// G=0x33f72a7d; S=0x33f73671; @synthesize=_postCode
@property(retain, nonatomic) NSString *postCodeExtension;	// G=0x33fafbc9; S=0x33f736d1; @synthesize=_postCodeExtension
@property(retain, nonatomic) NSString *premise;	// G=0x33fafbf9; S=0x33f73721; @synthesize=_premise
@property(retain, nonatomic) NSString *premises;	// G=0x33f72aad; S=0x33f73691; @synthesize=_premises
@property(retain, nonatomic) NSString *subAdministrativeArea;	// G=0x33f72a8d; S=0x33f73651; @synthesize=_subAdministrativeArea
@property(retain, nonatomic) NSString *subLocality;	// G=0x33f72a9d; S=0x33f73681; @synthesize=_subLocality
@property(retain, nonatomic) NSMutableArray *subPremises;	// G=0x33fafc09; S=0x33f73731; @synthesize=_subPremises
@property(retain, nonatomic) NSString *subThoroughfare;	// G=0x33f72abd; S=0x33f736b1; @synthesize=_subThoroughfare
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x33f72a4d; S=0x33f736a1; @synthesize=_thoroughfare
- (void)addAreaOfInterest:(id)interest;	// 0x33fae769
- (void)addDependentLocality:(id)locality;	// 0x33f752d5
- (void)addGeoId:(long long)anId;	// 0x33fae9c1
- (void)addSubPremise:(id)premise;	// 0x33fae8dd
// declared property getter: - (id)administrativeArea;	// 0x33f72a6d
// declared property getter: - (id)administrativeAreaCode;	// 0x33fafbb9
- (id)areaOfInterestAtIndex:(unsigned)index;	// 0x33fae7f5
// declared property getter: - (id)areaOfInterests;	// 0x33fafbd9
- (unsigned)areaOfInterestsCount;	// 0x33fae7d5
- (void)clearAreaOfInterests;	// 0x33fae749
- (void)clearDependentLocalitys;	// 0x33fae845
- (void)clearGeoIds;	// 0x33fae9ad
- (void)clearSubPremises;	// 0x33fae8bd
- (void)copyTo:(id)to;	// 0x33faeff1
// declared property getter: - (id)country;	// 0x33f72aed
// declared property getter: - (id)countryCode;	// 0x33f72a2d
- (void)dealloc;	// 0x33f73455
- (id)dependentLocalityAtIndex:(unsigned)index;	// 0x33fae885
// declared property getter: - (id)dependentLocalitys;	// 0x33fafbe9
- (unsigned)dependentLocalitysCount;	// 0x33fae865
- (id)description;	// 0x33faea99
- (id)dictionaryRepresentation;	// 0x33faeb09
// declared property getter: - (id)fullThoroughfare;	// 0x33f72a3d
- (long long)geoIdAtIndex:(unsigned)index;	// 0x33fae9d9
// declared property getter: - (long long *)geoIds;	// 0x33fae99d
// declared property getter: - (unsigned)geoIdsCount;	// 0x33fae989
// declared property getter: - (BOOL)hasAdministrativeArea;	// 0x33fae641
// declared property getter: - (BOOL)hasAdministrativeAreaCode;	// 0x33fae659
// declared property getter: - (BOOL)hasCountry;	// 0x33fae611
// declared property getter: - (BOOL)hasCountryCode;	// 0x33fae629
// declared property getter: - (BOOL)hasFullThoroughfare;	// 0x33fae719
// declared property getter: - (BOOL)hasInlandWater;	// 0x33fae815
// declared property getter: - (BOOL)hasLocality;	// 0x33fae689
// declared property getter: - (BOOL)hasOcean;	// 0x33fae82d
// declared property getter: - (BOOL)hasPostCode;	// 0x33fae6a1
// declared property getter: - (BOOL)hasPostCodeExtension;	// 0x33fae731
// declared property getter: - (BOOL)hasPremise;	// 0x33fae8a5
// declared property getter: - (BOOL)hasPremises;	// 0x33fae6d1
// declared property getter: - (BOOL)hasSubAdministrativeArea;	// 0x33fae671
// declared property getter: - (BOOL)hasSubLocality;	// 0x33fae6b9
// declared property getter: - (BOOL)hasSubThoroughfare;	// 0x33fae701
// declared property getter: - (BOOL)hasThoroughfare;	// 0x33fae6e9
- (unsigned)hash;	// 0x33faf99d
// declared property getter: - (id)inlandWater;	// 0x33f72acd
- (BOOL)isEqual:(id)equal;	// 0x33faf595
// declared property getter: - (id)locality;	// 0x33f72a5d
// declared property getter: - (id)ocean;	// 0x33f72add
// declared property getter: - (id)postCode;	// 0x33f72a7d
// declared property getter: - (id)postCodeExtension;	// 0x33fafbc9
// declared property getter: - (id)premise;	// 0x33fafbf9
// declared property getter: - (id)premises;	// 0x33f72aad
- (BOOL)readFrom:(id)from;	// 0x33faefe5
// declared property setter: - (void)setAdministrativeArea:(id)area;	// 0x33f73631
// declared property setter: - (void)setAdministrativeAreaCode:(id)code;	// 0x33f73641
// declared property setter: - (void)setAreaOfInterests:(id)interests;	// 0x33f736e1
// declared property setter: - (void)setCountry:(id)country;	// 0x33f73611
// declared property setter: - (void)setCountryCode:(id)code;	// 0x33f73621
// declared property setter: - (void)setDependentLocalitys:(id)localitys;	// 0x33f73711
// declared property setter: - (void)setFullThoroughfare:(id)thoroughfare;	// 0x33f736c1
- (void)setGeoIds:(long long *)ids count:(unsigned)count;	// 0x33faea81
// declared property setter: - (void)setInlandWater:(id)water;	// 0x33f736f1
// declared property setter: - (void)setLocality:(id)locality;	// 0x33f73661
// declared property setter: - (void)setOcean:(id)ocean;	// 0x33f73701
// declared property setter: - (void)setPostCode:(id)code;	// 0x33f73671
// declared property setter: - (void)setPostCodeExtension:(id)extension;	// 0x33f736d1
// declared property setter: - (void)setPremise:(id)premise;	// 0x33f73721
// declared property setter: - (void)setPremises:(id)premises;	// 0x33f73691
// declared property setter: - (void)setSubAdministrativeArea:(id)area;	// 0x33f73651
// declared property setter: - (void)setSubLocality:(id)locality;	// 0x33f73681
// declared property setter: - (void)setSubPremises:(id)premises;	// 0x33f73731
// declared property setter: - (void)setSubThoroughfare:(id)thoroughfare;	// 0x33f736b1
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x33f736a1
// declared property getter: - (id)subAdministrativeArea;	// 0x33f72a8d
// declared property getter: - (id)subLocality;	// 0x33f72a9d
- (id)subPremiseAtIndex:(unsigned)index;	// 0x33fae969
// declared property getter: - (id)subPremises;	// 0x33fafc09
- (unsigned)subPremisesCount;	// 0x33fae949
// declared property getter: - (id)subThoroughfare;	// 0x33f72abd
// declared property getter: - (id)thoroughfare;	// 0x33f72a4d
- (void)writeTo:(id)to;	// 0x33f71781
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEORouteAttributes : PBCodable {
	int _basicPointsToBeIncluded;	// 4 = 0x4
	NSString *_phoneticLocaleIdentifier;	// 8 = 0x8
	int _trafficType;	// 12 = 0xc
	int _transportType;	// 16 = 0x10
	BOOL _includeContingencyRoutes;	// 20 = 0x14
	BOOL _includeLaneGuidance;	// 21 = 0x15
	BOOL _includeNavigationInfo;	// 22 = 0x16
	BOOL _includePhonetics;	// 23 = 0x17
	BOOL _includeTrafficAlongRoute;	// 24 = 0x18
	BOOL _includeZilchPoints;	// 25 = 0x19
	struct {
		unsigned basicPointsToBeIncluded : 1;
		unsigned trafficType : 1;
		unsigned transportType : 1;
		unsigned includeContingencyRoutes : 1;
		unsigned includeLaneGuidance : 1;
		unsigned includeNavigationInfo : 1;
		unsigned includePhonetics : 1;
		unsigned includeTrafficAlongRoute : 1;
		unsigned includeZilchPoints : 1;
	} _has;	// 26 = 0x1a
}
@property(assign, nonatomic) int basicPointsToBeIncluded;	// G=0x324c2a21; S=0x324c2a49; @synthesize=_basicPointsToBeIncluded
@property(assign, nonatomic) BOOL hasBasicPointsToBeIncluded;	// G=0x324c2a95; S=0x324c2a71; 
@property(assign, nonatomic) BOOL hasIncludeContingencyRoutes;	// G=0x324c29ad; S=0x324c2989; 
@property(assign, nonatomic) BOOL hasIncludeLaneGuidance;	// G=0x324c2a0d; S=0x324c29e9; 
@property(assign, nonatomic) BOOL hasIncludeNavigationInfo;	// G=0x324c28e9; S=0x324c28c5; 
@property(assign, nonatomic) BOOL hasIncludePhonetics;	// G=0x324c2889; S=0x324c2865; 
@property(assign, nonatomic) BOOL hasIncludeTrafficAlongRoute;	// G=0x324c2bbd; S=0x324c2b99; 
@property(assign, nonatomic) BOOL hasIncludeZilchPoints;	// G=0x324c2949; S=0x324c2925; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticLocaleIdentifier;	// G=0x324c2b31; 
@property(assign, nonatomic) BOOL hasTrafficType;	// G=0x324c2b1d; S=0x324c2af9; 
@property(assign, nonatomic) BOOL hasTransportType;	// G=0x324c2829; S=0x324c2805; 
@property(assign, nonatomic) BOOL includeContingencyRoutes;	// G=0x324c3dbd; S=0x324c2961; @synthesize=_includeContingencyRoutes
@property(assign, nonatomic) BOOL includeLaneGuidance;	// G=0x324c3dcd; S=0x324c29c1; @synthesize=_includeLaneGuidance
@property(assign, nonatomic) BOOL includeNavigationInfo;	// G=0x324c3d9d; S=0x324c289d; @synthesize=_includeNavigationInfo
@property(assign, nonatomic) BOOL includePhonetics;	// G=0x324c3d8d; S=0x324c283d; @synthesize=_includePhonetics
@property(assign, nonatomic) BOOL includeTrafficAlongRoute;	// G=0x324c2b49; S=0x324c2b71; @synthesize=_includeTrafficAlongRoute
@property(assign, nonatomic) BOOL includeZilchPoints;	// G=0x324c3dad; S=0x324c28fd; @synthesize=_includeZilchPoints
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier;	// G=0x324c3ddd; S=0x324c3ded; @synthesize=_phoneticLocaleIdentifier
@property(assign, nonatomic) int trafficType;	// G=0x324c2aa9; S=0x324c2ad1; @synthesize=_trafficType
@property(assign, nonatomic) int transportType;	// G=0x324c3d7d; S=0x324c27dd; @synthesize=_transportType
// declared property getter: - (int)basicPointsToBeIncluded;	// 0x324c2a21
- (void)copyTo:(id)to;	// 0x324c36a9
- (void)dealloc;	// 0x324c2799
- (id)description;	// 0x324c2bd1
- (id)dictionaryRepresentation;	// 0x324c2c41
// declared property getter: - (BOOL)hasBasicPointsToBeIncluded;	// 0x324c2a95
// declared property getter: - (BOOL)hasIncludeContingencyRoutes;	// 0x324c29ad
// declared property getter: - (BOOL)hasIncludeLaneGuidance;	// 0x324c2a0d
// declared property getter: - (BOOL)hasIncludeNavigationInfo;	// 0x324c28e9
// declared property getter: - (BOOL)hasIncludePhonetics;	// 0x324c2889
// declared property getter: - (BOOL)hasIncludeTrafficAlongRoute;	// 0x324c2bbd
// declared property getter: - (BOOL)hasIncludeZilchPoints;	// 0x324c2949
// declared property getter: - (BOOL)hasPhoneticLocaleIdentifier;	// 0x324c2b31
// declared property getter: - (BOOL)hasTrafficType;	// 0x324c2b1d
// declared property getter: - (BOOL)hasTransportType;	// 0x324c2829
- (unsigned)hash;	// 0x324c3b81
// declared property getter: - (BOOL)includeContingencyRoutes;	// 0x324c3dbd
// declared property getter: - (BOOL)includeLaneGuidance;	// 0x324c3dcd
// declared property getter: - (BOOL)includeNavigationInfo;	// 0x324c3d9d
// declared property getter: - (BOOL)includePhonetics;	// 0x324c3d8d
// declared property getter: - (BOOL)includeTrafficAlongRoute;	// 0x324c2b49
// declared property getter: - (BOOL)includeZilchPoints;	// 0x324c3dad
- (BOOL)isEqual:(id)equal;	// 0x324c3925
// declared property getter: - (id)phoneticLocaleIdentifier;	// 0x324c3ddd
- (BOOL)readFrom:(id)from;	// 0x324c34c5
// declared property setter: - (void)setBasicPointsToBeIncluded:(int)beIncluded;	// 0x324c2a49
// declared property setter: - (void)setHasBasicPointsToBeIncluded:(BOOL)beIncluded;	// 0x324c2a71
// declared property setter: - (void)setHasIncludeContingencyRoutes:(BOOL)routes;	// 0x324c2989
// declared property setter: - (void)setHasIncludeLaneGuidance:(BOOL)guidance;	// 0x324c29e9
// declared property setter: - (void)setHasIncludeNavigationInfo:(BOOL)info;	// 0x324c28c5
// declared property setter: - (void)setHasIncludePhonetics:(BOOL)phonetics;	// 0x324c2865
// declared property setter: - (void)setHasIncludeTrafficAlongRoute:(BOOL)route;	// 0x324c2b99
// declared property setter: - (void)setHasIncludeZilchPoints:(BOOL)points;	// 0x324c2925
// declared property setter: - (void)setHasTrafficType:(BOOL)type;	// 0x324c2af9
// declared property setter: - (void)setHasTransportType:(BOOL)type;	// 0x324c2805
// declared property setter: - (void)setIncludeContingencyRoutes:(BOOL)routes;	// 0x324c2961
// declared property setter: - (void)setIncludeLaneGuidance:(BOOL)guidance;	// 0x324c29c1
// declared property setter: - (void)setIncludeNavigationInfo:(BOOL)info;	// 0x324c289d
// declared property setter: - (void)setIncludePhonetics:(BOOL)phonetics;	// 0x324c283d
// declared property setter: - (void)setIncludeTrafficAlongRoute:(BOOL)route;	// 0x324c2b71
// declared property setter: - (void)setIncludeZilchPoints:(BOOL)points;	// 0x324c28fd
// declared property setter: - (void)setPhoneticLocaleIdentifier:(id)identifier;	// 0x324c3ded
// declared property setter: - (void)setTrafficType:(int)type;	// 0x324c2ad1
// declared property setter: - (void)setTransportType:(int)type;	// 0x324c27dd
// declared property getter: - (int)trafficType;	// 0x324c2aa9
// declared property getter: - (int)transportType;	// 0x324c3d7d
- (void)writeTo:(id)to;	// 0x324c34d1
@end

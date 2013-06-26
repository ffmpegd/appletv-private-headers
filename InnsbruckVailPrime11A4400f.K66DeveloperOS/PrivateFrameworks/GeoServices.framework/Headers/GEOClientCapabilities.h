/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface GEOClientCapabilities : PBCodable {
	NSString *_appMajorVersion;	// 4 = 0x4
	NSString *_appMinorVersion;	// 8 = 0x8
	NSString *_hardwareModel;	// 12 = 0xc
	int _maxManeuverTypeSupported;	// 16 = 0x10
	XXStruct_ec15KC _has;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *appMajorVersion;	// G=0x30f330fd; S=0x30f3310d; @synthesize=_appMajorVersion
@property(retain, nonatomic) NSString *appMinorVersion;	// G=0x30f3311d; S=0x30f3312d; @synthesize=_appMinorVersion
@property(retain, nonatomic) NSString *hardwareModel;	// G=0x30f3313d; S=0x30f3314d; @synthesize=_hardwareModel
@property(readonly, assign, nonatomic) BOOL hasAppMajorVersion;	// G=0x30f328c9; 
@property(readonly, assign, nonatomic) BOOL hasAppMinorVersion;	// G=0x30f328e1; 
@property(readonly, assign, nonatomic) BOOL hasHardwareModel;	// G=0x30f328f9; 
@property(assign, nonatomic) BOOL hasMaxManeuverTypeSupported;	// G=0x30f3297d; S=0x30f32961; 
@property(assign, nonatomic) int maxManeuverTypeSupported;	// G=0x30f32911; S=0x30f32939; @synthesize=_maxManeuverTypeSupported
// declared property getter: - (id)appMajorVersion;	// 0x30f330fd
// declared property getter: - (id)appMinorVersion;	// 0x30f3311d
- (void)copyTo:(id)to;	// 0x30f32e55
- (void)dealloc;	// 0x30f3285d
- (id)description;	// 0x30f32991
- (id)dictionaryRepresentation;	// 0x30f32a01
// declared property getter: - (id)hardwareModel;	// 0x30f3313d
// declared property getter: - (BOOL)hasAppMajorVersion;	// 0x30f328c9
// declared property getter: - (BOOL)hasAppMinorVersion;	// 0x30f328e1
// declared property getter: - (BOOL)hasHardwareModel;	// 0x30f328f9
// declared property getter: - (BOOL)hasMaxManeuverTypeSupported;	// 0x30f3297d
- (unsigned)hash;	// 0x30f33065
- (BOOL)isEqual:(id)equal;	// 0x30f32f5d
// declared property getter: - (int)maxManeuverTypeSupported;	// 0x30f32911
- (BOOL)readFrom:(id)from;	// 0x30f32d99
// declared property setter: - (void)setAppMajorVersion:(id)version;	// 0x30f3310d
// declared property setter: - (void)setAppMinorVersion:(id)version;	// 0x30f3312d
// declared property setter: - (void)setHardwareModel:(id)model;	// 0x30f3314d
// declared property setter: - (void)setHasMaxManeuverTypeSupported:(BOOL)supported;	// 0x30f32961
// declared property setter: - (void)setMaxManeuverTypeSupported:(int)supported;	// 0x30f32939
- (void)writeTo:(id)to;	// 0x30f32da5
@end

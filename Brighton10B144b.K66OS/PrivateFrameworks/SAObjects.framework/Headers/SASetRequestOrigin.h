/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSDate, NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) NSNumber *age;	// G=0x353e3325; S=0x353e3341; 
@property(assign, nonatomic) double altitude;	// G=0x353e3361; S=0x353e33e1; 
@property(copy, nonatomic) NSString *desiredAccuracy;	// G=0x353e3425; S=0x353e3441; 
@property(assign, nonatomic) double direction;	// G=0x353e3491; S=0x353e3511; 
@property(assign, nonatomic) double horizontalAccuracy;	// G=0x353e3261; S=0x353e32e1; 
@property(assign, nonatomic) double latitude;	// G=0x353e3009; S=0x353e3089; 
@property(assign, nonatomic) double longitude;	// G=0x353e30d1; S=0x353e3151; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(assign, nonatomic) double speed;	// G=0x353e3559; S=0x353e35d9; 
@property(copy, nonatomic) NSString *status;	// G=0x353e361d; S=0x353e3639; 
@property(copy, nonatomic) NSDate *timestamp;	// G=0x353e3689; S=0x353e36a5; 
@property(assign, nonatomic) double verticalAccuracy;	// G=0x353e3199; S=0x353e3219; 
+ (id)setRequestOrigin;	// 0x353e2f75
+ (id)setRequestOriginWithDictionary:(id)dictionary context:(id)context;	// 0x353e2fb9
// declared property getter: - (id)age;	// 0x353e3325
// declared property getter: - (double)altitude;	// 0x353e3361
// declared property getter: - (id)desiredAccuracy;	// 0x353e3425
// declared property getter: - (double)direction;	// 0x353e3491
- (id)encodedClassName;	// 0x353e2f69
- (id)groupIdentifier;	// 0x353e2f59
// declared property getter: - (double)horizontalAccuracy;	// 0x353e3261
// declared property getter: - (double)latitude;	// 0x353e3009
// declared property getter: - (double)longitude;	// 0x353e30d1
// declared property setter: - (void)setAge:(id)age;	// 0x353e3341
// declared property setter: - (void)setAltitude:(double)altitude;	// 0x353e33e1
// declared property setter: - (void)setDesiredAccuracy:(id)accuracy;	// 0x353e3441
// declared property setter: - (void)setDirection:(double)direction;	// 0x353e3511
// declared property setter: - (void)setHorizontalAccuracy:(double)accuracy;	// 0x353e32e1
// declared property setter: - (void)setLatitude:(double)latitude;	// 0x353e3089
// declared property setter: - (void)setLongitude:(double)longitude;	// 0x353e3151
// declared property setter: - (void)setSpeed:(double)speed;	// 0x353e35d9
// declared property setter: - (void)setStatus:(id)status;	// 0x353e3639
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x353e36a5
// declared property setter: - (void)setVerticalAccuracy:(double)accuracy;	// 0x353e3219
// declared property getter: - (double)speed;	// 0x353e3559
// declared property getter: - (id)status;	// 0x353e361d
// declared property getter: - (id)timestamp;	// 0x353e3689
// declared property getter: - (double)verticalAccuracy;	// 0x353e3199
@end


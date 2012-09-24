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
@property(retain, nonatomic) NSNumber *age;	// G=0x32532c6d; S=0x32532c89; 
@property(assign, nonatomic) double altitude;	// G=0x32532ca9; S=0x32532d29; 
@property(copy, nonatomic) NSString *desiredAccuracy;	// G=0x32532d6d; S=0x32532d89; 
@property(assign, nonatomic) double direction;	// G=0x32532dd9; S=0x32532e59; 
@property(assign, nonatomic) double horizontalAccuracy;	// G=0x32532ba9; S=0x32532c29; 
@property(assign, nonatomic) double latitude;	// G=0x32532951; S=0x325329d1; 
@property(assign, nonatomic) double longitude;	// G=0x32532a19; S=0x32532a99; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(assign, nonatomic) double speed;	// G=0x32532ea1; S=0x32532f21; 
@property(copy, nonatomic) NSString *status;	// G=0x32532f65; S=0x32532f81; 
@property(copy, nonatomic) NSDate *timestamp;	// G=0x32532fd1; S=0x32532fed; 
@property(assign, nonatomic) double verticalAccuracy;	// G=0x32532ae1; S=0x32532b61; 
+ (id)setRequestOrigin;	// 0x325328bd
+ (id)setRequestOriginWithDictionary:(id)dictionary context:(id)context;	// 0x32532901
// declared property getter: - (id)age;	// 0x32532c6d
// declared property getter: - (double)altitude;	// 0x32532ca9
// declared property getter: - (id)desiredAccuracy;	// 0x32532d6d
// declared property getter: - (double)direction;	// 0x32532dd9
- (id)encodedClassName;	// 0x325328b1
- (id)groupIdentifier;	// 0x325328a1
// declared property getter: - (double)horizontalAccuracy;	// 0x32532ba9
// declared property getter: - (double)latitude;	// 0x32532951
// declared property getter: - (double)longitude;	// 0x32532a19
// declared property setter: - (void)setAge:(id)age;	// 0x32532c89
// declared property setter: - (void)setAltitude:(double)altitude;	// 0x32532d29
// declared property setter: - (void)setDesiredAccuracy:(id)accuracy;	// 0x32532d89
// declared property setter: - (void)setDirection:(double)direction;	// 0x32532e59
// declared property setter: - (void)setHorizontalAccuracy:(double)accuracy;	// 0x32532c29
// declared property setter: - (void)setLatitude:(double)latitude;	// 0x325329d1
// declared property setter: - (void)setLongitude:(double)longitude;	// 0x32532a99
// declared property setter: - (void)setSpeed:(double)speed;	// 0x32532f21
// declared property setter: - (void)setStatus:(id)status;	// 0x32532f81
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x32532fed
// declared property setter: - (void)setVerticalAccuracy:(double)accuracy;	// 0x32532b61
// declared property getter: - (double)speed;	// 0x32532ea1
// declared property getter: - (id)status;	// 0x32532f65
// declared property getter: - (id)timestamp;	// 0x32532fd1
// declared property getter: - (double)verticalAccuracy;	// 0x32532ae1
@end

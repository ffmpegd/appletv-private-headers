/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface CLLocation : NSObject <NSCopying, NSCoding> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double altitude;	// G=0x3212d709; 
@property(readonly, assign, nonatomic) XXStruct_lPTB1C clientLocation;	// G=0x3212d775; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;	// G=0x3212d6e1; 
@property(readonly, assign, nonatomic) double course;	// G=0x3212d7bd; 
@property(readonly, assign, nonatomic) double horizontalAccuracy;	// G=0x3212d72d; 
@property(readonly, assign, nonatomic) NSString *iso6709Notation;	// G=0x3212dc81; 
@property(readonly, assign, nonatomic) double speed;	// G=0x3212d799; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x3212ddf1; 
@property(readonly, assign, nonatomic) int type;	// G=0x3212d7e1; 
@property(readonly, assign, nonatomic) double verticalAccuracy;	// G=0x3212d751; 
- (id)init;	// 0x3212d951
- (id)initWithClientLocation:(XXStruct_lPTB1C)clientLocation;	// 0x3212db51
- (id)initWithCoder:(id)coder;	// 0x3212e2c9
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x3212db01
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 timestamp:(id)timestamp;	// 0x3212daa1
- (id)initWithIso6709Notation:(id)iso6709Notation;	// 0x3212e505
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x3212d985
- (id)_initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x3212d9f1
// declared property getter: - (double)altitude;	// 0x3212d709
// declared property getter: - (XXStruct_lPTB1C)clientLocation;	// 0x3212d775
// declared property getter: - (XXStruct_zYrK5D)coordinate;	// 0x3212d6e1
- (id)copyWithZone:(NSZone *)zone;	// 0x3212dfdd
// declared property getter: - (double)course;	// 0x3212d7bd
- (void)dealloc;	// 0x3212e025
- (id)description;	// 0x3212df25
- (double)distanceFromLocation:(const id)location;	// 0x3212dda9
- (void)encodeWithCoder:(id)coder;	// 0x3212e071
- (double)getDistanceFrom:(const id)from;	// 0x3212dddd
// declared property getter: - (double)horizontalAccuracy;	// 0x3212d72d
// declared property getter: - (id)iso6709Notation;	// 0x3212dc81
- (id)propagateLocationToTime:(double)time;	// 0x3212dcb1
- (void)setHorizontalAccuracy:(double)accuracy;	// 0x3212dc41
- (id)shortDescription;	// 0x3212de39
// declared property getter: - (double)speed;	// 0x3212d799
// declared property getter: - (id)timestamp;	// 0x3212ddf1
// declared property getter: - (int)type;	// 0x3212d7e1
// declared property getter: - (double)verticalAccuracy;	// 0x3212d751
@end


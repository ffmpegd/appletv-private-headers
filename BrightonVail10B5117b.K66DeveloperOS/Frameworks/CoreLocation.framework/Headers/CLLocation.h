/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSCoding> {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double altitude;	// G=0x315fa5f5; 
@property(readonly, assign, nonatomic) XXStruct_hPLVOD clientLocation;	// G=0x315fa6ad; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;	// G=0x315fa595; 
@property(readonly, assign, nonatomic) double course;	// G=0x315fa6fd; 
@property(readonly, assign, nonatomic) double horizontalAccuracy;	// G=0x315fa61d; 
@property(readonly, assign, nonatomic) NSString *iso6709Notation;	// G=0x315faa4d; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D rawCoordinate;	// G=0x315fa5c5; 
@property(readonly, assign, nonatomic) double rawCourse;	// G=0x315fa725; 
@property(readonly, assign, nonatomic) double speed;	// G=0x315fa6d5; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x315fa66d; 
@property(readonly, assign, nonatomic) int type;	// G=0x315fa74d; 
@property(readonly, assign, nonatomic) double verticalAccuracy;	// G=0x315fa645; 
- (id)init;	// 0x315f9af1
- (id)initWithClientLocation:(XXStruct_hPLVOD)clientLocation;	// 0x315f9d01
- (id)initWithCoder:(id)coder;	// 0x315f9e2d
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x315f9ca9
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 timestamp:(id)timestamp;	// 0x315f9c41
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x315f9b29
- (id)_initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x315f9b91
// declared property getter: - (double)altitude;	// 0x315fa5f5
// declared property getter: - (XXStruct_hPLVOD)clientLocation;	// 0x315fa6ad
// declared property getter: - (XXStruct_zYrK5D)coordinate;	// 0x315fa595
- (id)copyWithZone:(NSZone *)zone;	// 0x315fa355
// declared property getter: - (double)course;	// 0x315fa6fd
- (void)dealloc;	// 0x315fa309
- (id)description;	// 0x315fa3a9
- (double)distanceFromLocation:(id)location;	// 0x315fa77d
- (void)encodeWithCoder:(id)coder;	// 0x315fa0e5
- (double)getDistanceFrom:(id)from;	// 0x315fa76d
// declared property getter: - (double)horizontalAccuracy;	// 0x315fa61d
// declared property getter: - (id)iso6709Notation;	// 0x315faa4d
- (id)propagateLocationToTime:(double)time;	// 0x315fa8fd
// declared property getter: - (XXStruct_zYrK5D)rawCoordinate;	// 0x315fa5c5
// declared property getter: - (double)rawCourse;	// 0x315fa725
- (void)setHorizontalAccuracy:(double)accuracy;	// 0x315faa85
- (id)shortDescription;	// 0x315fa479
- (id)snapToResolution:(double)resolution;	// 0x315fa7ad
// declared property getter: - (double)speed;	// 0x315fa6d5
// declared property getter: - (id)timestamp;	// 0x315fa66d
// declared property getter: - (int)type;	// 0x315fa74d
// declared property getter: - (double)verticalAccuracy;	// 0x315fa645
@end


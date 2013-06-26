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
@property(readonly, assign, nonatomic) double altitude;	// G=0x315a65f5; 
@property(readonly, assign, nonatomic) XXStruct_hPLVOD clientLocation;	// G=0x315a66ad; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;	// G=0x315a6595; 
@property(readonly, assign, nonatomic) double course;	// G=0x315a66fd; 
@property(readonly, assign, nonatomic) double horizontalAccuracy;	// G=0x315a661d; 
@property(readonly, assign, nonatomic) NSString *iso6709Notation;	// G=0x315a6a4d; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D rawCoordinate;	// G=0x315a65c5; 
@property(readonly, assign, nonatomic) double rawCourse;	// G=0x315a6725; 
@property(readonly, assign, nonatomic) double speed;	// G=0x315a66d5; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x315a666d; 
@property(readonly, assign, nonatomic) int type;	// G=0x315a674d; 
@property(readonly, assign, nonatomic) double verticalAccuracy;	// G=0x315a6645; 
- (id)init;	// 0x315a5af1
- (id)initWithClientLocation:(XXStruct_hPLVOD)clientLocation;	// 0x315a5d01
- (id)initWithCoder:(id)coder;	// 0x315a5e2d
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x315a5ca9
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 timestamp:(id)timestamp;	// 0x315a5c41
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x315a5b29
- (id)_initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x315a5b91
// declared property getter: - (double)altitude;	// 0x315a65f5
// declared property getter: - (XXStruct_hPLVOD)clientLocation;	// 0x315a66ad
// declared property getter: - (XXStruct_zYrK5D)coordinate;	// 0x315a6595
- (id)copyWithZone:(NSZone *)zone;	// 0x315a6355
// declared property getter: - (double)course;	// 0x315a66fd
- (void)dealloc;	// 0x315a6309
- (id)description;	// 0x315a63a9
- (double)distanceFromLocation:(id)location;	// 0x315a677d
- (void)encodeWithCoder:(id)coder;	// 0x315a60e5
- (double)getDistanceFrom:(id)from;	// 0x315a676d
// declared property getter: - (double)horizontalAccuracy;	// 0x315a661d
// declared property getter: - (id)iso6709Notation;	// 0x315a6a4d
- (id)propagateLocationToTime:(double)time;	// 0x315a68fd
// declared property getter: - (XXStruct_zYrK5D)rawCoordinate;	// 0x315a65c5
// declared property getter: - (double)rawCourse;	// 0x315a6725
- (void)setHorizontalAccuracy:(double)accuracy;	// 0x315a6a85
- (id)shortDescription;	// 0x315a6479
- (id)snapToResolution:(double)resolution;	// 0x315a67ad
// declared property getter: - (double)speed;	// 0x315a66d5
// declared property getter: - (id)timestamp;	// 0x315a666d
// declared property getter: - (int)type;	// 0x315a674d
// declared property getter: - (double)verticalAccuracy;	// 0x315a6645
@end

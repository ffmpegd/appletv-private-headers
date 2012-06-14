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

@class NSDate;

@interface CLHeading : NSObject <NSCopying, NSCoding> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double headingAccuracy;	// G=0x31951d55; 
@property(readonly, assign, nonatomic) double magneticHeading;	// G=0x31951d05; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x31951df5; 
@property(readonly, assign, nonatomic) double trueHeading;	// G=0x31951d2d; 
@property(readonly, assign, nonatomic) double x;	// G=0x31951d7d; 
@property(readonly, assign, nonatomic) double y;	// G=0x31951da5; 
@property(readonly, assign, nonatomic) double z;	// G=0x31951dcd; 
- (id)initWithClientHeading:(XXStruct__AuldD)clientHeading;	// 0x31951639
- (id)initWithCoder:(id)coder;	// 0x31951729
- (id)copyWithZone:(NSZone *)zone;	// 0x31951b2d
- (void)dealloc;	// 0x31951ae1
- (id)description;	// 0x31951b91
- (void)encodeWithCoder:(id)coder;	// 0x31951911
// declared property getter: - (double)headingAccuracy;	// 0x31951d55
// declared property getter: - (double)magneticHeading;	// 0x31951d05
- (id)shortDescription;	// 0x31951c31
// declared property getter: - (id)timestamp;	// 0x31951df5
// declared property getter: - (double)trueHeading;	// 0x31951d2d
// declared property getter: - (double)x;	// 0x31951d7d
// declared property getter: - (double)y;	// 0x31951da5
// declared property getter: - (double)z;	// 0x31951dcd
@end

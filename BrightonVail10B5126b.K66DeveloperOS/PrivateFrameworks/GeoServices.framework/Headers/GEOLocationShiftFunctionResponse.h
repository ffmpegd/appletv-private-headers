/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOLocationShiftFunctionResponse : NSObject {
	XXStruct_zYrK5D _originalCoordinate;	// 4 = 0x4
	XXStruct_zYrK5D _shiftedCoordinate;	// 20 = 0x14
	double _creationTime;	// 36 = 0x24
}
@property(assign, nonatomic) XXStruct_zYrK5D originalCoordinate;	// G=0x33fb3c0d; S=0x33fb3c31; @synthesize=_originalCoordinate
- (id)initWithLocationShiftResponse:(id)locationShiftResponse originalCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x33fb3971
- (BOOL)needsNewFunctionForCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x33fb3ad9
// declared property getter: - (XXStruct_zYrK5D)originalCoordinate;	// 0x33fb3c0d
// declared property setter: - (void)setOriginalCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x33fb3c31
- (XXStruct_zYrK5D)shiftedCoordinateForCoordinate:(XXStruct_zYrK5D)coordinate accuracy:(double *)accuracy;	// 0x33fb3a2d
- (BOOL)wantsNewFunctionForCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x33fb3ab5
@end


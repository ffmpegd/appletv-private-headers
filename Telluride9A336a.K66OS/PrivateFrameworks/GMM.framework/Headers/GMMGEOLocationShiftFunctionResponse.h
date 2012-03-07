/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <GEOLocationShiftFunctionResponse.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMGEOLocationShiftFunctionResponse : GEOLocationShiftFunctionResponse {
	int _originalLatitude;	// 44 = 0x2c
	int _originalLongitude;	// 48 = 0x30
	int _modelSqHalfLength;	// 52 = 0x34
	int _cacheSqHalfLength;	// 56 = 0x38
	long long _latCoefficients[3];	// 60 = 0x3c
	long long _lngCoefficients[3];	// 84 = 0x54
}
@property(assign) XXStruct_UNJ7RC originalCoordinate;	// G=0x3386fcdd; S=0x3386fc65; converted property
- (id)initWithGMMLocationShiftResponse:(id)gmmlocationShiftResponse;	// 0x3386fab1
- (BOOL)needsNewFunctionForCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x3386ff79
// converted property getter: - (XXStruct_UNJ7RC)originalCoordinate;	// 0x3386fcdd
// converted property setter: - (void)setOriginalCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x3386fc65
- (XXStruct_UNJ7RC)shiftedCoordinateForCoordinate:(XXStruct_UNJ7RC)coordinate accuracy:(double *)accuracy;	// 0x3386fd65
- (BOOL)wantsNewFunctionForCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x3386fed9
@end


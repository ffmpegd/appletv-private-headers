/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"

@class GQDBezierPath;

__attribute__((visibility("hidden")))
@interface GQDRLineEnd : NSObject <GQDNameMappable> {
@private
	GQDBezierPath *mPath;	// 4 = 0x4
	CGPoint mEndPoint;	// 8 = 0x8
	BOOL mIsFilled;	// 16 = 0x10
	double mScale;	// 20 = 0x14
}
+ (const StateSpec *)stateForReading;	// 0x304b41dd
- (void)dealloc;	// 0x304b42ed
- (CGPoint)endPoint;	// 0x304b419d
- (BOOL)isFilled;	// 0x304b41b5
- (CGPathRef)path;	// 0x304b4209
- (char *)pathStr;	// 0x304b41e9
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x304b4399
- (double)scale;	// 0x304b41c5
@end


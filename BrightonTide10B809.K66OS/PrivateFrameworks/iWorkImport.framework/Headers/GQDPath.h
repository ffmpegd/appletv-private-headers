/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQDPath : NSObject {
	char *mPathString;	// 4 = 0x4
}
+ (char *)createPathString:(CGPathRef)string;	// 0x368fef21
+ (CFStringRef)createString:(CGPathRef)string;	// 0x368ff0d1
- (CGPathRef)createBezierPath;	// 0x368fef1d
- (void)dealloc;	// 0x368feebd
- (BOOL)hasHorizontalFlip;	// 0x368ff109
- (BOOL)hasVerticalFlip;	// 0x368ff105
- (BOOL)horizontalFlip;	// 0x368ff111
- (BOOL)isRect;	// 0x368fef05
- (BOOL)isRectangular;	// 0x368fef01
- (char *)pathStr;	// 0x368fef81
- (BOOL)verticalFlip;	// 0x368ff10d
@end

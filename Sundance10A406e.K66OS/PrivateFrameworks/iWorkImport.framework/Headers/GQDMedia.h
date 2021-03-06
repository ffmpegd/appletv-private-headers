/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"
#import "GQDGraphic.h"

@class GQDFilteredImage, GQDAffineGeometry, GQDPath, GQDImageBinary;

@interface GQDMedia : GQDGraphic <GQDNameMappable> {
	GQDFilteredImage *mFilteredImage;	// 40 = 0x28
	GQDAffineGeometry *mCropGeometry;	// 44 = 0x2c
	GQDImageBinary *mOriginalImageBinary;	// 48 = 0x30
	GQDPath *mPath;	// 52 = 0x34
}
+ (const StateSpec *)stateForReading;	// 0x32452065
- (id)cropGeometry;	// 0x32452131
- (void)dealloc;	// 0x32452071
- (id)imageBinary;	// 0x324520fd
- (id)maskPath;	// 0x32452141
@end


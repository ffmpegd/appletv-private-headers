/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDImageBinary;

__attribute__((visibility("hidden")))
@interface GQDFilteredImage : NSObject <GQDNameMappable> {
@private
	GQDImageBinary *mOriginalImageBinary;	// 4 = 0x4
	GQDImageBinary *mFilteredImageBinary;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x304da681
- (void)dealloc;	// 0x304da6d5
- (id)imageBinary;	// 0x304da65d
@end


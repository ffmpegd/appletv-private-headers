/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PXTransition : NSObject {
}
+ (void)initialize;	// 0x356b2481
+ (int)readDirection:(xmlNode *)direction defaultValue:(int)value;	// 0x356b65f5
+ (int)readInOut:(xmlNode *)anOut defaultValue:(int)value;	// 0x356e1801
+ (int)readOrientation:(xmlNode *)orientation attribute:(const char *)attribute defaultValue:(int)value;	// 0x356e3655
+ (void)readTransitionFromNode:(xmlNode *)node tgtTransition:(id)transition drawingState:(id)state;	// 0x3569c821
@end


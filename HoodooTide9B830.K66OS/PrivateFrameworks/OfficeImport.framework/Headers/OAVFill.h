/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAVFill : NSObject {
}
+ (void)addStopsFromArray:(const OAVGradientStop *)array stopCount:(int)count inverted:(BOOL)inverted startPos:(float)pos endPos:(float)pos5 toGradientFill:(id)gradientFill manager:(id)manager;	// 0x3138e361
+ (id)readBlipRefFromManager:(id)manager state:(id)state;	// 0x3138e5d9
+ (id)readFromManager:(id)manager state:(id)state;	// 0x3127f951
+ (void)readGradientFill:(id)fill fromManager:(id)manager;	// 0x3138e6c5
+ (void)readImageFill:(id)fill fromManager:(id)manager state:(id)state;	// 0x3138e4e5
+ (id)targetBgColorWithManager:(id)manager;	// 0x3138e30d
+ (id)targetFgColorWithManager:(id)manager;	// 0x312800a5
@end

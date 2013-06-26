/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


@interface GQDWPLineSpacing : NSObject <GQDNameMappable> {
	int mMode;	// 4 = 0x4
	float mAmount;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x368cba4d
- (id)init;	// 0x368cba59
- (float)amount;	// 0x368cbab9
- (int)mode;	// 0x368cbaa9
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x368cbac9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class CPBitmapStore, NSSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject {
	CPBitmapStore *_store;	// 4 = 0x4
	NSSet *_layouts;	// 8 = 0x8
	BOOL _isCommitting;	// 12 = 0xc
}
+ (BOOL)enabled;	// 0x30cf9205
+ (id)sharedInstance;	// 0x30c942dd
- (id)init;	// 0x30c94325
- (void)cacheView:(id)view forKey:(id)key fromLayout:(id)layout;	// 0x30f70601
- (CGImageRef)cachedImageForKey:(id)key fromLayout:(id)layout;	// 0x30f705a9
- (void)commitTransaction;	// 0x30c94511
- (void)dealloc;	// 0x30f70545
- (void)displayView:(id)view imageWidth:(float)width withKey:(id)key fromLayout:(id)layout;	// 0x30cf8f49
- (void)displayView:(id)view withKey:(id)key fromLayout:(id)layout;	// 0x30cf8ee5
- (CGImageRef)renderBlock:(id)block forView:(id)view withKey:(id)key fromLayout:(id)layout;	// 0x30f707f5
- (id)uniqueLayoutsFromInputModes:(id)inputModes;	// 0x30f708b9
- (void)updateCacheForInputModes:(id)inputModes;	// 0x30f709a1
@end

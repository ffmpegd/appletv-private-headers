/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVJSObject.h"
#import <NSObject.h> // Unknown library

@class SKProduct;

__attribute__((visibility("hidden")))
@interface ATVJSSKProduct : NSObject <ATVJSObject> {
@private
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	SKProduct *_product;	// 8 = 0x8
}
@property(readonly, assign) OpaqueJSValue *jsObjectRef;	// G=0x3332f449; converted property
@property(readonly, assign, nonatomic) SKProduct *product;	// G=0x3332f459; @synthesize=_product
+ (void)addClassDefinitionInContext:(OpaqueJSContext *)context;	// 0x3332efc9
+ (id)productFromJSValue:(OpaqueJSValue *)jsvalue context:(OpaqueJSContext *)context;	// 0x3332f281
- (id)init;	// 0x3332f2dd
- (id)initWithProduct:(id)product context:(OpaqueJSContext *)context;	// 0x3332f321
- (void)dealloc;	// 0x3332f3fd
// converted property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x3332f449
// declared property getter: - (id)product;	// 0x3332f459
@end

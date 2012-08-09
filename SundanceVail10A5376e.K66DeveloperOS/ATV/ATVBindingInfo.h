/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVBindingInfo : XXUnknownSuperclass {
	id _observedObject;	// 4 = 0x4
	NSString *_observedKeyPath;	// 8 = 0x8
	NSDictionary *_bindingOptions;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDictionary *bindingOptions;	// G=0x24dc91; @synthesize=_bindingOptions
@property(readonly, assign, nonatomic) NSString *observedKeyPath;	// G=0x24dc7d; @synthesize=_observedKeyPath
@property(readonly, assign, nonatomic) id observedObject;	// G=0x24dc6d; @synthesize=_observedObject
- (id)initWithObservedObject:(id)observedObject observedKeyPath:(id)path bindingOptions:(id)options;	// 0x24db6d
- (id)_modelKeyPath;	// 0x24dc69
// declared property getter: - (id)bindingOptions;	// 0x24dc91
- (void)dealloc;	// 0x24dbf5
// declared property getter: - (id)observedKeyPath;	// 0x24dc7d
// declared property getter: - (id)observedObject;	// 0x24dc6d
@end

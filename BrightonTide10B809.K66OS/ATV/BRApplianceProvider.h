/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_applianceInfo;	// 4 = 0x4
}
- (id)init;	// 0x2ccce1
- (void)_loadAppliances;	// 0x2ccf8d
- (id)applianceInfoAtIndex:(long)index;	// 0x2cce11
- (long)applianceInfoIndexForKey:(id)key;	// 0x2cce59
- (id)controlFactory;	// 0x2ccee9
- (id)dataAtIndex:(long)index;	// 0x2ccf25
- (long)dataCount;	// 0x2ccf05
- (void)dealloc;	// 0x2ccd95
- (id)hashForDataAtIndex:(long)index;	// 0x2ccf45
- (void)reloadAppliances;	// 0x2ccf7d
@end


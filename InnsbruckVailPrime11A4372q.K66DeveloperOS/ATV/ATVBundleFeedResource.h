/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVReadOnlyFeedResource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface ATVBundleFeedResource : XXUnknownSuperclass <ATVReadOnlyFeedResource> {
	NSString *_basePath;	// 4 = 0x4
	NSBundle *_bundle;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *path;	// G=0x13c019; 
+ (void)initialize;	// 0x13be8d
- (id)initWithBundlePath:(id)bundlePath;	// 0x13bf01
- (void)dealloc;	// 0x13bfb5
- (id)feedResourceNamed:(id)named;	// 0x13c029
// declared property getter: - (id)path;	// 0x13c019
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVReadOnlyFeedResource.h"
#import <NSObject.h> // Unknown library

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface ATVBundleFeedResource : NSObject <ATVReadOnlyFeedResource> {
@private
	NSString *_basePath;	// 4 = 0x4
	NSBundle *_bundle;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *path;	// G=0x33a06895; 
+ (void)initialize;	// 0x33a06705
- (id)initWithBundlePath:(id)bundlePath;	// 0x33a06771
- (void)dealloc;	// 0x33a06835
- (id)feedResourceNamed:(id)named;	// 0x33a068a5
// declared property getter: - (id)path;	// 0x33a06895
@end


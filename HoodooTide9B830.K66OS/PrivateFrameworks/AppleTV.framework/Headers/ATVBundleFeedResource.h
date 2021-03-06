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
@property(readonly, assign, nonatomic) NSString *path;	// G=0x3294f365; 
+ (void)initialize;	// 0x3294f1d9
- (id)initWithBundlePath:(id)bundlePath;	// 0x3294f245
- (void)dealloc;	// 0x3294f305
- (id)feedResourceNamed:(id)named;	// 0x3294f375
// declared property getter: - (id)path;	// 0x3294f365
@end


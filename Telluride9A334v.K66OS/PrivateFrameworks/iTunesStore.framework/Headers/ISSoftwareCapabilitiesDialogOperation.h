/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {
@private
	NSDictionary *_mismatches;	// 60 = 0x3c
	id _requiredCapabilities;	// 64 = 0x40
}
@property(readonly, assign) NSDictionary *mismatches;	// G=0x32731045; 
@property(readonly, assign) id requiredCapabilities;	// G=0x3273107d; 
- (id)initWithRequiredCapabilities:(id)requiredCapabilities mismatches:(id)mismatches;	// 0x32730f85
- (void)_postDefaultDialog;	// 0x3273151d
- (void)dealloc;	// 0x32730fe5
// declared property getter: - (id)mismatches;	// 0x32731045
// declared property getter: - (id)requiredCapabilities;	// 0x3273107d
- (void)run;	// 0x327310b5
@end


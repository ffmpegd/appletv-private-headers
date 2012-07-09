/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVFeedInterstitialGroupElement, NSDictionary, ATVFeedDocument, NSArray;

__attribute__((visibility("hidden")))
@interface ATVInterstitialGroup : XXUnknownSuperclass {
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSDictionary *_feedDictionary;	// 8 = 0x8
	ATVFeedInterstitialGroupElement *_feedElement;	// 12 = 0xc
	NSArray *_interstitials;	// 16 = 0x10
	NSArray *_collapsedInterstitials;	// 20 = 0x14
	NSArray *_netTimeChapters;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *collapsedInterstitials;	// G=0x16dcd5; @synthesize=_collapsedInterstitials
@property(readonly, assign, nonatomic) NSDictionary *feedDictionary;	// G=0x16dca5; @synthesize=_feedDictionary
@property(readonly, assign, nonatomic) ATVFeedInterstitialGroupElement *feedElement;	// G=0x16dcb5; @synthesize=_feedElement
@property(readonly, assign, nonatomic) NSArray *interstitials;	// G=0x16dcc5; @synthesize=_interstitials
@property(retain, nonatomic) NSArray *netTimeChapters;	// G=0x16dce5; S=0x16dcf5; @synthesize=_netTimeChapters
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x16d479
- (id)initWithFeedElement:(id)feedElement;	// 0x16d049
- (id)collapsedInterstitialForGrossTime:(double)grossTime;	// 0x16dbb9
// declared property getter: - (id)collapsedInterstitials;	// 0x16dcd5
- (void)dealloc;	// 0x16d841
// declared property getter: - (id)feedDictionary;	// 0x16dca5
// declared property getter: - (id)feedElement;	// 0x16dcb5
- (double)grossTimeForNetTime:(double)netTime;	// 0x16da71
// declared property getter: - (id)interstitials;	// 0x16dcc5
// declared property getter: - (id)netTimeChapters;	// 0x16dce5
- (double)netTimeForGrossTime:(double)grossTime;	// 0x16d8f9
// declared property setter: - (void)setNetTimeChapters:(id)chapters;	// 0x16dcf5
@end

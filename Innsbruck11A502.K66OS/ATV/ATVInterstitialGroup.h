/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVFeedDocument, NSDictionary, NSArray, ATVFeedInterstitialGroupElement;

__attribute__((visibility("hidden")))
@interface ATVInterstitialGroup : XXUnknownSuperclass {
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSDictionary *_feedDictionary;	// 8 = 0x8
	ATVFeedInterstitialGroupElement *_feedElement;	// 12 = 0xc
	NSArray *_interstitials;	// 16 = 0x10
	NSArray *_collapsedInterstitials;	// 20 = 0x14
	NSArray *_netTimeChapters;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *collapsedInterstitials;	// G=0x18524d; @synthesize=_collapsedInterstitials
@property(readonly, assign, nonatomic) NSDictionary *feedDictionary;	// G=0x18521d; @synthesize=_feedDictionary
@property(readonly, assign, nonatomic) ATVFeedInterstitialGroupElement *feedElement;	// G=0x18522d; @synthesize=_feedElement
@property(readonly, assign, nonatomic) NSArray *interstitials;	// G=0x18523d; @synthesize=_interstitials
@property(retain, nonatomic) NSArray *netTimeChapters;	// G=0x18525d; S=0x18526d; @synthesize=_netTimeChapters
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x1849e9
- (id)initWithFeedElement:(id)feedElement;	// 0x1845c9
- (id)collapsedInterstitialForGrossTime:(double)grossTime;	// 0x185131
// declared property getter: - (id)collapsedInterstitials;	// 0x18524d
- (void)dealloc;	// 0x184da9
// declared property getter: - (id)feedDictionary;	// 0x18521d
// declared property getter: - (id)feedElement;	// 0x18522d
- (double)grossTimeForNetTime:(double)netTime;	// 0x184ff1
// declared property getter: - (id)interstitials;	// 0x18523d
// declared property getter: - (id)netTimeChapters;	// 0x18525d
- (double)netTimeForGrossTime:(double)grossTime;	// 0x184e61
// declared property setter: - (void)setNetTimeChapters:(id)chapters;	// 0x18526d
@end


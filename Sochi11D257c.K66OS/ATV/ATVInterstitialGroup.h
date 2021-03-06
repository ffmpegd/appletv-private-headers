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
@property(readonly, assign, nonatomic) NSArray *collapsedInterstitials;	// G=0x19703d; @synthesize=_collapsedInterstitials
@property(readonly, assign, nonatomic) NSDictionary *feedDictionary;	// G=0x19700d; @synthesize=_feedDictionary
@property(readonly, assign, nonatomic) ATVFeedInterstitialGroupElement *feedElement;	// G=0x19701d; @synthesize=_feedElement
@property(readonly, assign, nonatomic) NSArray *interstitials;	// G=0x19702d; @synthesize=_interstitials
@property(retain, nonatomic) NSArray *netTimeChapters;	// G=0x19704d; S=0x19705d; @synthesize=_netTimeChapters
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x1967d9
- (id)initWithFeedElement:(id)feedElement;	// 0x1963b9
- (id)collapsedInterstitialForGrossTime:(double)grossTime;	// 0x196f21
// declared property getter: - (id)collapsedInterstitials;	// 0x19703d
- (void)dealloc;	// 0x196b99
// declared property getter: - (id)feedDictionary;	// 0x19700d
// declared property getter: - (id)feedElement;	// 0x19701d
- (double)grossTimeForNetTime:(double)netTime;	// 0x196de1
// declared property getter: - (id)interstitials;	// 0x19702d
// declared property getter: - (id)netTimeChapters;	// 0x19704d
- (double)netTimeForGrossTime:(double)grossTime;	// 0x196c51
// declared property setter: - (void)setNetTimeChapters:(id)chapters;	// 0x19705d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class GEODirectionsFeedback, GEODirectionsFeedbackCollection, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject {
	GEODirectionsFeedback *_currentDirectionsFeedback;	// 4 = 0x4
	GEODirectionsFeedbackCollection *_currentFeedbackCollection;	// 8 = 0x8
	NSMutableSet *_routeIDs;	// 12 = 0xc
}
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback;	// G=0x33fcce55; S=0x33fcce65; @synthesize=_currentDirectionsFeedback
@property(retain, nonatomic) GEODirectionsFeedbackCollection *currentFeedbackCollection;	// G=0x33fcce35; S=0x33fcce45; @synthesize=_currentFeedbackCollection
@property(retain, nonatomic) NSMutableSet *routeIDs;	// G=0x33fcce75; S=0x33fcce85; @synthesize=_routeIDs
- (void)addRouteID:(id)anId stepID:(unsigned)anId2;	// 0x33fccce5
// declared property getter: - (id)currentDirectionsFeedback;	// 0x33fcce55
// declared property getter: - (id)currentFeedbackCollection;	// 0x33fcce35
- (void)dealloc;	// 0x33fccae5
- (void)endFeedbackSession;	// 0x33fccdbd
- (void)reset;	// 0x33fccb25
// declared property getter: - (id)routeIDs;	// 0x33fcce75
// declared property setter: - (void)setCurrentDirectionsFeedback:(id)feedback;	// 0x33fcce65
// declared property setter: - (void)setCurrentFeedbackCollection:(id)collection;	// 0x33fcce45
// declared property setter: - (void)setRouteIDs:(id)ids;	// 0x33fcce85
- (void)startFeedbackSessionForResponseID:(id)responseID;	// 0x33fccb91
@end

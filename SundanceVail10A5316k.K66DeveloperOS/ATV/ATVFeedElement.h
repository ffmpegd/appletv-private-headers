/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary, ATVFeedDocument, ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedElement : XXUnknownSuperclass {
	NSString *_identifier;	// 4 = 0x4
	ATVFeedMerchant *_merchant;	// 8 = 0x8
	NSString *_type;	// 12 = 0xc
	ATVFeedElement *_parent;	// 16 = 0x10
	NSDictionary *_eventHandlerScripts;	// 20 = 0x14
}
@property(retain, nonatomic) NSDictionary *eventHandlerScripts;	// G=0x13e60d; S=0x13e61d; @synthesize=_eventHandlerScripts
@property(copy, nonatomic) NSString *identifier;	// G=0x13e595; S=0x13e5a9; @synthesize=_identifier
@property(retain, nonatomic) ATVFeedMerchant *merchant;	// G=0x13e4a9; S=0x13e5b9; @synthesize=_merchant
@property(readonly, assign, nonatomic) ATVFeedDocument *ownerDocument;	// G=0x13e4e9; 
@property(assign, nonatomic) ATVFeedElement *parent;	// G=0x13e5ed; S=0x13e5fd; @synthesize=_parent
@property(copy, nonatomic) NSString *type;	// G=0x13e5c9; S=0x13e5dd; @synthesize=_type
+ (id)elementWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13e28d
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13e2e5
- (void)dealloc;	// 0x13e509
// declared property getter: - (id)eventHandlerScripts;	// 0x13e60d
// declared property getter: - (id)identifier;	// 0x13e595
// declared property getter: - (id)merchant;	// 0x13e4a9
// declared property getter: - (id)ownerDocument;	// 0x13e4e9
// declared property getter: - (id)parent;	// 0x13e5ed
// declared property setter: - (void)setEventHandlerScripts:(id)scripts;	// 0x13e61d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x13e5a9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x13e5b9
// declared property setter: - (void)setParent:(id)parent;	// 0x13e5fd
// declared property setter: - (void)setType:(id)type;	// 0x13e5dd
// declared property getter: - (id)type;	// 0x13e5c9
@end


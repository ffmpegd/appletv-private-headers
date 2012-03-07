/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVFeedDocument, NSDictionary, ATVFeedMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedElement : NSObject {
@private
	NSString *_identifier;	// 4 = 0x4
	ATVFeedMerchant *_merchant;	// 8 = 0x8
	NSString *_type;	// 12 = 0xc
	ATVFeedElement *_parent;	// 16 = 0x10
	NSString *_accessibilityLabel;	// 20 = 0x14
	NSDictionary *_eventHandlerScripts;	// 24 = 0x18
}
@property(copy, nonatomic) NSString *accessibilityLabel;	// G=0x332feb29; S=0x332feb39; @synthesize=_accessibilityLabel
@property(retain, nonatomic) NSDictionary *eventHandlerScripts;	// G=0x332feb5d; S=0x332feb6d; @synthesize=_eventHandlerScripts
@property(copy, nonatomic) NSString *identifier;	// G=0x332fea7d; S=0x332fea8d; @synthesize=_identifier
@property(retain, nonatomic) ATVFeedMerchant *merchant;	// G=0x332fe985; S=0x332feab1; @synthesize=_merchant
@property(readonly, assign, nonatomic) ATVFeedDocument *ownerDocument;	// G=0x332fe9c1; 
@property(assign, nonatomic) ATVFeedElement *parent;	// G=0x332feb09; S=0x332feb19; @synthesize=_parent
@property(copy, nonatomic) NSString *type;	// G=0x332fead5; S=0x332feae5; @synthesize=_type
+ (id)elementWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x332fe799
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x332fe7f1
// declared property getter: - (id)accessibilityLabel;	// 0x332feb29
- (void)dealloc;	// 0x332fe9e1
// declared property getter: - (id)eventHandlerScripts;	// 0x332feb5d
// declared property getter: - (id)identifier;	// 0x332fea7d
// declared property getter: - (id)merchant;	// 0x332fe985
// declared property getter: - (id)ownerDocument;	// 0x332fe9c1
// declared property getter: - (id)parent;	// 0x332feb09
// declared property setter: - (void)setAccessibilityLabel:(id)label;	// 0x332feb39
// declared property setter: - (void)setEventHandlerScripts:(id)scripts;	// 0x332feb6d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x332fea8d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x332feab1
// declared property setter: - (void)setParent:(id)parent;	// 0x332feb19
// declared property setter: - (void)setType:(id)type;	// 0x332feae5
// declared property getter: - (id)type;	// 0x332fead5
@end


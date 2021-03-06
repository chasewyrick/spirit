/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"
#import "UIProgressView.h"


@interface UIProgressView : UIView <NSCoding> {
@private
	int _progressViewStyle;
	float _progress;
}
@property(assign, nonatomic) int progressViewStyle;
@property(assign, nonatomic) float progress;
+(CGSize)defaultSize;
+(void)_loadResourcesForStyle:(int)style;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithProgressViewStyle:(int)progressViewStyle;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)drawOverlayProgressView:(CGRect)view;
-(void)drawProgressView:(CGRect)view;
-(void)drawRect:(CGRect)rect;
@end

@interface UIProgressView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end


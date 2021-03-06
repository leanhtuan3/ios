//
//  BUDividerView.h
//
//
//  Created by neil on 22/02/2011.
//  Copyright 2011 Buffer. All rights reserved.
//

#import <UIKit/UIKit.h>


#define kBottomBorderStrokeColor			[UIColor whiteColor]
#define kTopBorderStrokeColor				[UIColor darkGrayColor]
#define kDividerStrokeWidth					1.0

typedef struct
{
	BOOL top;
	BOOL bottom;
} DividerParams;

@interface BUDividerView : UIView {
	CGFloat stroke;
	UIColor *topStrokeColor;
	UIColor *bottomStrokeColor;
	DividerParams position;
}
@property (nonatomic, assign)	CGFloat	stroke;
@property (nonatomic, strong)	UIColor	*topStrokeColor;
@property (nonatomic, strong)	UIColor	*bottomStrokeColor;
@property (nonatomic, assign)	DividerParams	position;

-(void)drawBorder:(CGContextRef)context;
-(void)initialise;
@end

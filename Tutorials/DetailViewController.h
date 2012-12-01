//
//  DetailViewController.h
//  Tutorials
//
//  Created by Lori Graybill on 12/1/12.
//  Copyright (c) 2012 Lori Graybill. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

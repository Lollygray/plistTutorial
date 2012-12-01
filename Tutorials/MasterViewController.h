//
//  MasterViewController.h
//  Tutorials
//
//  Created by Lori Graybill on 12/1/12.
//  Copyright (c) 2012 Lori Graybill. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
